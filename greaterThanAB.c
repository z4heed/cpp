#include <stdio.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if(a<b){
        printf("%f is greater than %f",b,a);
    }
    else{
        printf("%f is greater than %f",a,b);
    }
    return 0;
}