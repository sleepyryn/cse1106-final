#include <stdio.h>
#include <math.h>
#include <unistd.h>
//#include <pigpio.h>
#define PIN 27


double calculateAverage(double readings[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) total += readings[i];
    return total / count;
}

void displayReadings(double readings) {
    printf("%.1f F       ", readings);
}

int isOutOfRange(double temperature, double UpperLimit, double LowerLimit) {
    return (temperature > UpperLimit || temperature < LowerLimit) ? 1 : 0;
}

void led() {
	/*gpioInitialise();
	gpioSetMode(PIN, PI_OUTPUT);
	gpioWrite(PIN,1);//LED ON
	getchar();//waits for enter key
	gpioWrite(PIN,0);//LED Off
	getchar();//waits for enter key
	gpioTerminate();*/
}

void checkReadings(double readings, double UpperLimit, double LowerLimit) {
    if (isOutOfRange(readings, UpperLimit, LowerLimit))
    {
        printf("WARNING        ON\n");
        led();
    }
    else printf("NORMAL         OFF\n");
}



int main(void) {
    int size = 0;
    printf("How many reading are you inputing\n");
	scanf("%d", &size);
    double readings[size];

    for(int i = 0; i < size; i++) 
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%lf", &readings[i]);
	}

    double UpperLimit;
    double LowerLimit;
    printf("What is the highest acceptable temperature allowed: ");
    scanf("%lf", &UpperLimit);
    printf("What is the Lowest acceptable temperature allowed: ");
    scanf("%lf", &LowerLimit);


    //check reading to see if it is in range and display result
    printf("\nTemperature  System Status  Warning LED\n");
    for(int i = 0; i < size; i++)
    {
        displayReadings(readings[i]);
        checkReadings(readings[i], UpperLimit, LowerLimit);
    }


    //get the averaage and display the result
    
    printf("\nAverage temperature: %.1f F\n",
    calculateAverage(readings, size));
    
    FILE *f;

    f = fopen("readings.txt", "w");
    fprintf(f, "Temperature  System Status  Warning LED\n");
    for(int i = 0; i < size; i++)
    {
        fprintf(f, "%.1f F       ", readings[i]);
        if (isOutOfRange(readings[i], UpperLimit, LowerLimit)) fprintf(f, "WARNING        ON\n");
        else fprintf(f, "NORMAL         OFF\n");
    }
   
}

