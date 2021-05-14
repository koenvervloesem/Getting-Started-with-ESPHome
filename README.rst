############################
Getting Started with ESPHome
############################

.. image:: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/workflows/Build/badge.svg
   :target: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/actions
   :alt: Continuous integration

.. image:: https://img.shields.io/github/license/koenvervloesem/Getting-Started-with-ESPHome.svg
   :target: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/master/LICENSE
   :alt: License

This repository contains the code discussed in the book `Getting Started with ESPHome <https://koen.vervloesem.eu/books/getting-started-with-esphome/>`_, published by `Elektor International Media <https://www.elektor.com>`_, as well as `a list of errors and their corrections <ERRATA.rst>`_ and some `additional tips and references <ADDITIONS.rst>`_.

**************
About the book
**************

Espressif's ESP8266 and ESP32 microcontrollers have brought DIY home automation to the masses. However, not everyone is fluent in programming these microcontrollers with Espressif's C/C++ SDK, the Arduino core, or MicroPython. This is where ESPHome comes into its own: with this project, you don't *program* your microcontroller but *configure* it.

This book demonstrates how to create your own home automation devices with ESPHome on an ESP32 microcontroller board. You'll learn how to combine all kinds of electronic components and automate complex behaviours. Your devices can work completely autonomously, and connect over Wi-Fi to your home automation gateways such as Home Assistant or MQTT broker.

By the end of this book, you will be able to create your own custom home automation devices the way you want. Thanks to ESPHome and the ESP32, this is within everyone's grasp.

* Set up an ESPHome development environment and create maintainable configurations
* Use buttons and LEDs
* Sound a buzzer and play melodies
* Read measurements from various types of sensors
* Communicate over a short distance with NFC, infrared light, and Bluetooth Low Energy
* Show information on various types of displays

TODO: table

*************
Included code
*************

TODO

*****************
Download the code
*****************

TODO

******
Errata
******

See the `ERRATA <ERRATA.rst>`_ document for the list of errors in the book and their corrections.

*********
Additions
*********

See the `ADDITIONS <ADDITIONS.rst>`_ document for some additional tips and references to interesting projects not mentioned in the book.

*******
License
*******

All code is provided by `Koen Vervloesem <http://koen.vervloesem.eu>`_ as open source software with the MIT license. See the `LICENSE <LICENSE>`_ for more information.

The included Roboto font is licensed under the `Apache License, Version 2.0 <https://fonts.google.com/specimen/Roboto#license>`_.

The `uFire_SHT20 <https://github.com/u-fire/uFire_SHT20>`_ library is licensed under the MIT license.

The C++/runtime codebase of the ESPHome project (file extensions .c, .cpp, .h, .hpp, .tcc, .ino) are published under the GPLv3 license. The Python codebase and all other parts of the ESPHome codebase are published under the MIT license. See the `ESPHome License <https://github.com/esphome/esphome/blob/dev/LICENSE>`_ for more information.
