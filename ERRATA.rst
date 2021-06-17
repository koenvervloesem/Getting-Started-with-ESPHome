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
