#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
        printf("%c is a valid Alphabet",a);
    }
    else {
        printf("%c is not a valid Alphabet",a);
    }
    
    return 0;
}