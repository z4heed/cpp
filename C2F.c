/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float farenheit;
    scanf("%f",&farenheit);
    printf("%.2f F",(farenheit-32)*5/9);
    return 0;
}
