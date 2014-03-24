Teensy_MCP4725
================

This is the modified version of the Adafruit MCP4725 12-bit I2C DAC Driver library for Teensy

Tested and works great with the Adafruit MCP4725 Breakout Board 
    ------> http://www.adafruit.com/products/935

This chip uses I2C to communicate, 2 pins are required to  
interface

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Original was Written by Kevin Townsend/Limor Fried for Adafruit Industries.  
BSD license, check license.txt for more information
All text above must be included in any redistribution

To download. click the DOWNLOADS button in the top right corner, rename the uncompressed folder Teensy_MCP4725. Check that the Teensy_MCP4725 folder contains Teensy_MCP4725.cpp and Teensy_MCP4725.h

Place the Teensy_MCP4725 library folder your arduinosketchfolder/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.

Note: you also need i2c_t3.h as a TWI (Wire.h) replacement for Teensy 3
Teensy modifications by Johan Korten
March 24, 2014

Teensy: see pjrc.com from Paul Stoffregen!