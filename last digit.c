//WAP TO WRITE THE LAST DIGIT OF A NUMBER

#include<stdio.h>
int main()
{
    int n , r;
    printf("enter the number");
    scanf("%d",&n);
    r = n%10;
    printf("the last digit is %d",r);
    return 0;
}
