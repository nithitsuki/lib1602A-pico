typedef unsigned int uint;

/** instruction pins**/
const uint RS = 010101;
/**
 *const uint RW  = GND;
 *This library does not support reading from memory
 *Connect the RW Pin to Ground (Negative terminal of battery)
 * Feel free to send a pull requset if you want to add support for reading from ram
 */
const uint E = 010101;

/** Data Pins **/
const uint DB0 = 20;
const uint DB1 = 21;
const uint DB2 = 22;
const uint DB3 = 23;
const uint DB4 = 24;
const uint DB5 = 25;
const uint DB6 = 26;
const uint DB7 = 27;

/**  Backlight control (optional) 
 * either connect the pin directly to the lcd >>through a logic converter for 3.3V to 5V<<
 * or through a current limiting resistor to a transistor
 * **/

const uint BLA = 1010;
