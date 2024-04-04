#include<stdio.h>

int main() {
    int size,index;
    scanf("%d",&size);
    float temp[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%f",&temp[i]);
    }
    scanf("%d",&index);
    printf("%.2f",temp[index-1]);
    return 0;
}

    



/* Problem statement:

Alex is working on a project to create a weather data analysis tool specifically designed for meteorologists. The core functionality of this tool involves an array named 'temperatures' that stores daily temperature readings as floating-point values. Users of the tool should be able to input the temperature for each day for a predetermined number of days. Additionally, the program should have the capability to retrieve and display the temperature recorded on any specific day as requested by the user.

Input format:

The first line of input consists of a positive integer 'days', representing the number of days for which temperatures are to be stored.
The second line of input consists of space-separated float values representing the recorded temperature on each day.
The third line of input consists of a positive integer 'fdays' representing the day on which the temperature should be retrieved.

Output format:

The output displays the float value representing the temperature recorded on a specific day rounded off to two decimal places.
Refer to the sample output for the formatting specifications.

Code constraints:

In this scenario, the test cases fall under the following constraints:
1 ≤ days ≤ 30
0.0 ≤ Temperature ≤ 32.0
1 ≤ fdays ≤ 30

Sample test cases:

Input 1:
1
30.536
1

Output 1:
30.54

Input 2:
30
0.0 28.5 29.1256 32.0 30.8 31.5 27.3 26.0 25.5 24.8 28.2 29.5 31.0 30.5 29.0 30.0 28.5 29.0 32.0 30.8 31.5 27.3233 26.0 25.5 24.8 28.2 29.5 31.0 30.5 29.0
22

Output 2:
27.32
 */



