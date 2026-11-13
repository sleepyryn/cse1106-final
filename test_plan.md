#Test Plan
To test our program with the LED and Raspberry Pi we will first 

Will have 3 inputs (80, 55, 70)
The temperature range will be 67-76 
Actual Output:

How many reading are you inputing
3
Enter reading 1: 80
Enter reading 2: 55
Enter reading 3: 70
What is the highest acceptable temperature allowed: 76
What is the Lowest acceptable temperature allowed: 67

Temperature  System Status  Warning LED
80.0 F       WARNING        ON

55.0 F       WARNING        ON

70.0 F       NORMAL         OFF

Average temperature: 68.3 F


Will have 4 inputs (66, 77, 70, 80)
The temperature range will be 69-78
Actual Output:

How many reading are you inputing
4
Enter reading 1: 66
Enter reading 2: 77
Enter reading 3: 70
Enter reading 4: 80
What is the highest acceptable temperature allowed: 78
What is the Lowest acceptable temperature allowed: 69

Temperature  System Status  Warning LED
66.0 F       WARNING        ON

77.0 F       NORMAL         OFF
70.0 F       NORMAL         OFF
80.0 F       WARNING        ON


Average temperature: 73.2 F


Will have 1 inputs (67)
The temperature range will be 68-77 
Actual Output:

How many reading are you inputing
1
Enter reading 1: 67
What is the highest acceptable temperature allowed: 77
What is the Lowest acceptable temperature allowed: 68

Temperature  System Status  Warning LED
67.0 F       WARNING        ON


Average temperature: 67.0 F


Will have 2 inputs (75, 74)
The temperature range will be 68-80
Actual Output:

How many reading are you inputing
2
Enter reading 1: 75
Enter reading 2: 74
What is the highest acceptable temperature allowed: 80
What is the Lowest acceptable temperature allowed: 68

Temperature  System Status  Warning LED
75.0 F       NORMAL         OFF
74.0 F       NORMAL         OFF

Average temperature: 74.5 F


Will have 3 inputs (80, 45, 70)
The temperature range will be 60-77
Actual Output:

How many reading are you inputing
3
Enter reading 1: 80
Enter reading 2: 45
Enter reading 3: 70
What is the highest acceptable temperature allowed: 77
What is the Lowest acceptable temperature allowed: 60

Temperature  System Status  Warning LED
80.0 F       WARNING        ON

45.0 F       WARNING        ON

70.0 F       NORMAL         OFF
