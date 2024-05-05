#include <stdio.h>

int main()
{
    float farenheit;
    scanf("%f",&farenheit);
    printf("%.2f F",(farenheit-32)*5/9);
    return 0;
}
