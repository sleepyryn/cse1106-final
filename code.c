#include <stdio.h>
#include <math.h>


double calculateAverage(double readings[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) total += readings[i];
    return total / count;
}

void displayReadings(double readings[], int count) {
    printf("Temperature Readings:\n");
    for (int i = 0; i < count; i++) printf("%.1f F\n", readings[i]);
}

int isOutOfRange(double temperature) {
    return (temperature > 75) ? 1 : 0;
}

void checkReadings(double readings[], int count) {
    printf("\nReadings requiring attention:\n");
    for (int i = 0; i < count; i++) {
        if (isOutOfRange(readings[i])) printf("%.1f F\n", readings[i]);
    }
}

int testsRun = 0;
int testsPassed = 0;

void recordTest(const char *testName, int passed)
{
    testsRun++;
    if (passed) {
        testsPassed++;
        printf("PASS: %s\n", testName);
    } else {
        printf("FAIL: %s\n", testName);
    }
}

/* Section 3 - Initial Test Suite */

/* T1: 75 F is within the acceptable range. */
void test_T1_normalTemperature(double temp) {
    double temperature = temp;
    recordTest("T1 - "+ temp+ " F is within the acceptable range",
               isOutOfRange(temperature) == 0);
}

/* T2: 64 F is below the minimum and should require attention. */
void test_T2_belowMinimum(double temp) {
    double temperature = temp;
    recordTest("T2 - " + temp + " F requires attention",
               isOutOfRange(temperature) == 1);
}

/* T3: 78.5 F is above the maximum and should require attention. */
void test_T3_aboveMaximum(double temp) {
    double temperature = temp;
    recordTest("T3 - " + temp + " F requires attention",
               isOutOfRange(temperature) == 1);
}

void runInitialTests(double readings[]) {
    printf("\n========================================\n");
    printf("CSE 1106 INITIAL TEST SUITE\n");
    printf("========================================\n\n");

    foreach(double s)
}

/* Finish the method "runTestsNewRequirement" below that invokes the minimal number of tests from T1-T8 needed to ensure (1) the new template change is correctly coded and (2) nothing else has changed. */
void runTestsNewRequirement(void) {
    printf("\n========================================\n");
    printf("CSE 1106 NEW REQUIREMENT TEST SUITE\n");
    printf("========================================\n\n");

    //TODO invoke relevant tests 
}
int main(void) {
    int size = 0;
    printf("How many reading are you inputing\n");
	scanf("%d", &size);
    double readings[size];
    foreach(int i = 0; i < size; i++) 
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%lf", &readings[i]);
	}

    /* First observe the existing program. */
    displayReadings(readings, size);
    printf("\nAverage temperature: %.1f F\n",
           calculateAverage(readings, size));
    checkReadings(readings, size);

    /* Then run the initial test suite. */
    runInitialTests();

    printf("\n========================================\n");
    printf("TEST SUMMARY\n");
    printf("========================================\n");
    printf("Tests passed: %d/%d\n", testsPassed, testsRun);
	
	testsRun = 0;
	testsPassed = 0;
	
	
    return 0;
}
