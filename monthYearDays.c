#include <stdio.h>

int main()
{
    int month,year,days;
    scanf("%d %d",&month,&year);
    if(month <1 || month > 12){
        return 1;
    }
    
    if(month == 2){
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            days = 29;
        }
        else{
            days = 28;
        }
    }
    else{
        switch (month){
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
            default:
                days = 31;
                break;
            }
        }
    printf("The month %d in the year %d consists of: %d days",month,year,days);
    return 0;
}