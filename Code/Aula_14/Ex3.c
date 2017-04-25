#include "gpio.h"
#include <unistd.h>

int main()
{
	int pin=4;
	if(setGPIO_Out(pin))
		return -1;
	if (GPIO_Write(pin,1))
		return 1;
	sleep(5);
	if(unsetGPIO(pin))
		return 2;
	return 0;
}
