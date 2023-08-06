##############################
Additional tips and references
##############################

These are some additional tips and references to interesting projects not mentioned in the book `Getting Started with ESPHome <https://koen.vervloesem.eu/books/getting-started-with-esphome/>`_:

*******
General
*******

* `Using ESPHome on the Raspberry Pi Pico W and other RP2040 microcontroller boards <https://koen.vervloesem.eu/blog/using-esphome-on-the-raspberry-pi-pico-w-and-other-rp2040-microcontroller-boards/>`_: At the time of writing my book, ESPHome only supported ESP32 and ESP8266 microcontrollers. ESPHome 2022.11 introduced support for the RP2040, the chip in the popular Raspberry Pi Pico W. In this blog article I share my findings about ESPHome's RP2040 support and some of its peculiarities.

*******************************
Chapter 6: Remote communication
*******************************

* `Connecting to Bluetooth Low Energy devices in ESPHome <https://koen.vervloesem.eu/blog/connecting-to-bluetooth-low-energy-devices-in-esphome/>`_: A blog post where I describe how to use the new BLE client functionality that has been added to ESPHome 1.18.
* `ESPHome Heart Rate Display <https://github.com/koenvervloesem/ESPHome-Heart-Rate-Display>`_: An ESPHome configuration that I created for a Bluetooth Low Energy heart rate display on an M5Stack Core or LilyGO TTGO T-Display ESP32.

*******************
Chapter 7: Displays
*******************

* `Showing a graph on a display with ESPHome <https://koen.vervloesem.eu/blog/showing-a-graph-on-a-display-with-esphome/>`_: A blog post where I show an example of how to show graphs of sensor measurements on a local display. This uses the `graph <https://esphome.io/components/display/index.html#graphs>`_ component that was added to ESPHome 2021.10.
