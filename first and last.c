//FIND SUM OF FIRST AND LAST TERM

#include<stdio.h>
int main()
{
    int n , r ;
    printf("enter the number");
    scanf("%d",&n);
    //the last digit
    r = n%10;
    printf("the last digit is %d \n", r);
    while(n>=10){
        n=n/10;
    }
    printf("the first digit is %d \n", n);
    int t = n+r;
    printf("the sum of first digit and last digit is %d \n",t);
    return 0;
}
