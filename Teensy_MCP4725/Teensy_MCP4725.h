/**************************************************************************/
/*! 
    @file     Teensy_MCP4725.h original Adafruit_MCP4725.h
    @author   K. Townsend (Adafruit Industries)
	@license  BSD (see license.txt)
	
	This is a library for the Adafruit MCP4725 breakout board
	----> http://www.adafruit.com/products/935
	
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


#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define MCP4726_CMD_WRITEDAC            (0x40)  // Writes data to the DAC
#define MCP4726_CMD_WRITEDACEEPROM      (0x60)  // Writes data to the DAC and the EEPROM (persisting the assigned value after reset)

class Teensy_MCP4725{
 public:
  Teensy_MCP4725();
  void begin(uint8_t a);  
  void setVoltage( uint16_t output, bool writeEEPROM );

 private:
  uint8_t _i2caddr;
};
