#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    char vowel[] = {'a','e','i','o','u'};
    
    for(int i=0; i < 5;i++){
        if(a==vowel[i]){
            printf("%c is a vowel",a);
        }
        else{
            printf("%c is not a vowel",a);
    }
    return 0;
}