######
Errata
######

These are corrections of errors found in the book `Getting Started with ESPHome <https://koen.vervloesem.eu/books/getting-started-with-esphome/>`_ only after its publication:

**********
Everywhere
**********

* In ESPHome 1.19, the order of the configuration file and the command has been changed in the command-line interface. So instead of ``esphome config.yaml run``, you now execute ``esphome run config.yaml``. The old format is still accepted for now, but will be removed in a future release.

*********************************************
Chapter 2: Preparing your ESPHome environment
*********************************************

* page 28: The ``--upload-port`` option has been renamed to ``--device`` in ESPHome 1.19.
* page 36: Due to an ESPHome update, you need to add ``wifi`` and ``api`` components to the ``chapter2_substitutions.yaml`` file, otherwise the configuration doesn't compile. This is fixed `in the chapter2_substitutions.yaml file in this repository <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/esphome/chapter2_substitutions.yaml>`_.

*******************
Chapter 7: Displays
*******************

* page 133, 137: For the T-Display's display platform ``st7789v`` you now need to specify the option ``model: TTGO TDisplay 135x240``. This is fixed `in the chapter7_tdisplay_mqtt.yaml file in this repository <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/esphome/chapter7_tdisplay_mqtt.yaml>`_ and `in the chapter7_pages.yaml file in this repository <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/esphome/chapter7_pages.yaml>`_.

********
Appendix
********

* page 148: To compile the custom integration example with the uFire SHT20 library, you `now <https://github.com/esphome/issues/issues/2704>`_ need to add ``"Wire.h`` to the global list of libraries in your ESPHome configuration file, before ``"uFire SHT20"``. This is fixed in `in the appendix_sht20.yaml file in this repository <https://github.com/koenvervloesem/Getting-Started-with-ESPHome/blob/main/esphome/appendix_sht20.yaml>`_.
