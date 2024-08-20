#include "config-pins.h"
/**
 * initialize gpio pins for the display
 */
gpio_init(RS);
gpio_init(E);
gpi1o_init(DB0);
gpio_init(DB1);
gpio_init(DB2);
gpio_init(DB3);
gpio_init(DB4);
gpio_init(DB5);
gpio_init(DB6);
gpio_init(DB7);
gpio_init(BLA);
/**
 * Set them all to output
 */
gpio_set_dir(RS, GPIO_OUT);
gpio_set_dir(E, GPIO_OUT);
gpio_set_dir(DB0, GPIO_OUT);
gpio_set_dir(DB1, GPIO_OUT);
gpio_set_dir(DB2, GPIO_OUT);
gpio_set_dir(DB3, GPIO_OUT);
gpio_set_dir(DB4, GPIO_OUT);
gpio_set_dir(DB5, GPIO_OUT);
gpio_set_dir(DB6, GPIO_OUT);
gpio_set_dir(DB7, GPIO_OUT);
gpio_set_dir(BLA, GPIO_OUT);
/**
 * Main stuff starts here
 */
void SendSignal(){
	gpio_put(E, 1);
	sleep_us(40);
	gpio_put(E, 0);
	sleep_us(40);
}

void ClearDisplay()
{
	/** Valid Data Start **/
	gpio_put(RS,  0);
	gpio_put(DB0, 1);
	gpio_put(DB1, 0);
	gpio_put(DB2, 0);
	gpio_put(DB3, 0);
	gpio_put(DB4, 0);
	gpio_put(DB5, 0);
	gpio_put(DB6, 0);
	gpio_put(DB7, 0);
	/** Valid Data End **/
	SendSignal();
}

void DisplayMode(int ON_or_OFF,int Cursor_on_off,int Blinking);
{	
	/**
	 * must be obvious but
	 * 0 is off, 1 is on
	 */
	
	/**if( ON_or_OFF != 0 || ON_OFF != 1){
	}
	Todo: set an erorr checker and edge case handler
	*/
	/** Valid Data Start **/
	gpio_put(RS,  0);
	gpio_put(DB0, Blinking);
	gpio_put(DB1, Cursor_on_off);
	gpio_put(DB2, ON_or_OFF);
	gpio_put(DB3, 1);
	gpio_put(DB4, 0);
	gpio_put(DB5, 0);
	gpio_put(DB6, 0);
	gpio_put(DB7, 0);
	/** Valid Data End **/
	SendSignal();
}
