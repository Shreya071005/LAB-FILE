//WAP TO PRINT SUM OF EVEN NUMBER FROM 1 TO N

#include<stdio.h>
int main()
{
    int n , i ;
    int sum = 0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){
            sum = sum +i;
            continue;
    }
    printf("the sum of n even number is %d",sum);
    return 0;
}
