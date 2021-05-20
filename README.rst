############################
Getting Started with ESPHome
############################

.. image:: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/workflows/Build/badge.svg
   :target: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/actions
   :alt: Continuous integration

.. image:: https://img.shields.io/github/license/koenvervloesem/Getting-Started-with-ESPHome.svg
   :target: https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/LICENSE
   :alt: License

This repository contains the code discussed in the book `Getting Started with ESPHome <https://koen.vervloesem.eu/books/getting-started-with-esphome/>`_, published by `Elektor International Media <https://www.elektor.com>`_, as well as `a list of errors and their corrections <ERRATA.rst>`_ and some `additional tips and references <ADDITIONS.rst>`_.

**************
About the book
**************

Espressif's ESP8266 and ESP32 microcontrollers have brought DIY home automation to the masses. However, not everyone is fluent in programming these microcontrollers with Espressif's C/C++ SDK, the Arduino core, or MicroPython. This is where ESPHome comes into its own: with this project, you don't *program* your microcontroller but *configure* it.

This book demonstrates how to create your own home automation devices with ESPHome on an ESP32 microcontroller board. You'll learn how to combine all kinds of electronic components and automate complex behaviours. Your devices can work completely autonomously, and connect over Wi-Fi to your home automation gateway such as Home Assistant or an MQTT broker.

By the end of this book, you will be able to create your own custom home automation devices the way you want. Thanks to ESPHome and the ESP32, this is within everyone's grasp.

* Set up an ESPHome development environment and create maintainable configurations
* Use buttons and LEDs
* Sound a buzzer and play melodies
* Read measurements from various types of sensors
* Communicate over a short distance with NFC, infrared light, and Bluetooth Low Energy
* Show information on various types of displays

+----------------------+-------------------------------------+
| **Title**            | Getting Started with ESPHome        |
+----------------------+-------------------------------------+
| **Author**           | Koen Vervloesem                     |
+----------------------+-------------------------------------+
| **Publication date** | 2021-05-19                          |
+----------------------+-------------------------------------+
| **Number of pages**  | 156                                 |
+----------------------+-------------------------------------+
| **Price**            | € 29.95                             |
+----------------------+-------------------------------------+
| **ISBN-13**          | 978-3-89576-441-7                   |
+----------------------+-------------------------------------+
| **ISBN-10**          | 3-895764-41-8                   |
+----------------------+-------------------------------------+
| **Publisher**        | Elektor International Media (EIM)   |
+----------------------+-------------------------------------+

*************
Included code
*************

The directory `esphome <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/tree/main/esphome>`_ contains all YAML files for the example code in this book. Each file name begins with the chapter where the example is explained.

While the examples printed in the book are often fragments of code, the corresponding YAML files in this repository are complete ESPHome configurations and can be compiled as such. Make sure to copy the `secrets.yaml.example <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/esphome/secrets.yaml.example>`_ file to ``secrets.yaml`` and enter your own credentials. Also change the substitutions in the beginning of a YAML file to your own preferred values.

*****************
Download the code
*****************

You can download the code all at once with `Git <https://git-scm.com/>`_:

.. code-block:: shell

  git clone https://github.com/koenvervloesem/Getting-Started-with-ESPHome.git

The code is then downloaded into the directory ``Getting-Started-with-ESPHome``.

You can also download a ZIP file of all code by clicking on the green button **Code** at the top right of this page and then on **Download ZIP**.

Just selecting and copying code from the GitHub web page of a specific file you're interested in and pasting it in an editor may work, but is not recommended. Especially with YAML code the whitespace can become mixed up, which results in invalid code.

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
