#include "esphome.h"
#include "uFire_SHT20.h"

class SHT20 : public PollingComponent {
 public:
  uFire_SHT20 sht20;
  Sensor *temperature_sensor = new Sensor();
  Sensor *humidity_sensor = new Sensor();

  // To prevent self-heating, the datasheet warns to do
  // maximum two measurements per second at 12-bit accuracy.
  // Stay on the safe side by polling every second.
  SHT20() : PollingComponent(1000) { }

  void setup() override {
    bool setup_status = sht20.begin();
    if(!setup_status) {
      ESP_LOGE("SHT20", "Sensor is not connected");
    }
  }

  void update() override {
    float temperature = sht20.temperature();
    temperature_sensor->publish_state(temperature);

    int humidity = sht20.humidity();
    humidity_sensor->publish_state(humidity);
  }
};
