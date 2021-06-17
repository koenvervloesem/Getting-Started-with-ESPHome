##############################
Additional tips and references
##############################

These are some additional tips and references to interesting projects not mentioned in the book `Getting Started with ESPHome <https://koen.vervloesem.eu/books/getting-started-with-esphome/>`_:

*******************************
Chapter 6: Remote communication
*******************************

* The BLE client functionality referred to in footnote 6 has been added to `ESPHome 1.18.0 <https://esphome.io/changelog/v1.18.0.html>`_. This makes it possible to connect over Bluetooth Low Energy to a device and read one-byte characteristics such as the battery level or humidity. Since `ESPHome 1.19.0 <https://esphome.io/changelog/v1.19.0.html>`_ you can also read characteristics as raw bytes. Have a look at the documentation of the `BLE Client <https://esphome.io/components/ble_client.html>`_ and `BLE Client Sensor <https://esphome.io/components/sensor/ble_client.html>`_ components. I created an `ESPHome Heart Rate Display <https://github.com/koenvervloesem/ESPHome-Heart-Rate-Display>`_ that shows an example of this functionality.
