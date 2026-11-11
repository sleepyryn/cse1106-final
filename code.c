#include <stdio.h>
#include <math.h>


double calculateAverage(double readings[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) total += readings[i];
    return total / count;
}

void displayReadings(double readings, int count) {
    printf("%.1f F       ", readings);
}

int isOutOfRange(double temperature) {
    return (temperature > 75) ? 1 : 0;
}

void checkReadings(double readings, int count) {
    if (isOutOfRange(readings)) printf("WARNING        ON\n");
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

    //check reading to see if it is in range and display result
    printf("Temperature  System Status  Warning LED\n");
    for(int i = 0; i < size; i++)
    {
        displayReadings(readings[i], size);
        checkReadings(readings[i], size);
        //Add led method
    }


    //get the averaage and display the result
    
    printf("\nAverage temperature: %.1f F\n",
           calculateAverage(readings, size));
    


   
}

