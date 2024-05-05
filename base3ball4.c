#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%3==0 && b%4==0){
        printf("baseball");
    }
    else if(a%3==0){
        printf("base");
    }
    else if(a%4==0){
        printf("ball");
    }
    else{
        printf("It's neither divisible by 3 or 4");
    }
    return 0;
}