//WAP TO WRITE THE first digit of a number

#include<stdio.h>
int main()
{
    int n , first;
    printf("enter the number");
    scanf("%d",&n);
    first = n;
        while(first >= 10){
            first = first/10;
        }
        printf("first digit = %d",first);
        return 0;
}
