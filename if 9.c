//CHECK WHETHER A ALPHABET OR NOT

#include<stdio.h>
int main()
{
    char c ;
    printf("enter the alphabet \n");
    scanf("%c",&c);
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c<= 'Z'))
        printf("input is alphabet ");
    else
        printf("input is not alphabet ");
    return 0;
}
