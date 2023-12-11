//CHECK WHETHER UPPERCASE OR LOWERCASE

#include<stdio.h>
int main()
{
    char c;
    printf("ENTER THE CHARACTER ");
    scanf("%c",&c);
    if(c >= 'a' && c<= 'z'){
        printf("given value is lowercase ");
    }
    else if( c>= 'A' && c <= 'Z'){
        printf("given value is uppercase ");
    }
    else{
        printf("given value is not a character");
    }
    return 0;
}
