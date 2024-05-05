#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    char vowel[] = {'a','e','i','o','u','A','E','I','O','U'};
    
    for(int i=0; i < 10;i++){
        if(a==vowel[i]){
            printf("%c is a vowel",a);
            return 0;
        }
    }
    printf("%c is not a vowel",a);
    return 0;
}