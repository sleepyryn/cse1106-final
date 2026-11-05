#include <stdio.h>
#include <unistd.h>
#include <pigpio.h>
#define PIN 27

int main (int argc, char* argv[])
{
	gpioInitialise();
	gpioSetMode(PIN, PI_OUTPUT);
	gpioWrite(PIN,1);//LED ON
	getchar();//waits for enter key
	gpioWrite(PIN,0);//LED Off
	getchar();//waits for enter key
	gpioTerminate();
	return 0;
}
