//WAP TO PRINT THE SUM OF ODD NUMBER

#include<stdio.h>
int main()
{
    int n , i;
    int sum = 0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
            if(i%2!=0){
              sum = sum + i;
            }
            continue;
    }
        printf("the sum of odd number is %d \n",sum);
    return 0;
