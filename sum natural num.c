//FIND SUM OF ALL NATURAL NUMBER FROM 1 TO N

#include<stdio.h>
int main()
{
    int n , sum = 0 , i ;
    printf("the sum of all element \n");
    printf("number of element");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
            sum = sum + i;
 }
 printf("the sum is %d",sum);
 return 0;
}
