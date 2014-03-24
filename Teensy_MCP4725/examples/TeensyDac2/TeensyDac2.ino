/**************************************************************************/
/*! 
    @file     Teensy_MCP4725.h
    @author   K. Townsend (Adafruit Industries)
	@license  BSD (see license.txt)
	
	This is a library for the Adafruit MCP4725 breakout board
	----> http://www.Adafruit.com/products/935

	
	Adafruit invests time and resources providing this open source code, 
	please support Adafruit and open-source hardware by purchasing 
	products from Adafruit!

	@section  HISTORY

    v1.0  - First release
    Modified by J.A. Korten March 25th 2014 for Teensy 3.1
    johan.a.korten [ at ] gmail com
*/
/**************************************************************************/
#include <i2c_t3.h>
#ifdef I2C_DEBUG
    #include <rbuf.h> // linker fix
#endif

#include <Teensy_MCP4725.h>

Teensy_MCP4725 dac;

void setup(void) {
  Serial.begin(9600);
  Serial.println("Hello!");
  delay(1000);

  // For Adafruit MCP4725A1 the address is 0x62 (default) or 0x63 (ADDR pin tied to VCC)
  // For MCP4725A0 the address is 0x60 or 0x61
  // For MCP4725A2 the address is 0x64 or 0x65
  dac.begin(0x63); // my MCP4725A1 is on 0x63 Tip! use an Arduino code i2c scanner! 
    
  Serial.println("Generating a triangle wave");
}

void loop(void) {
    uint32_t counter;
    // Run through the full 12-bit scale for a triangle wave
    for (counter = 0; counter < 4095; counter++)
    {
      dac.setVoltage(counter, false);
    }
    for (counter = 4095; counter > 0; counter--)
    {
      dac.setVoltage(counter, false);
    }
}
