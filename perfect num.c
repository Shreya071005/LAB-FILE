//PRINT PERFECT NUMBER

#include<stdio.h>
int main()
{
    int n , i , sum;
    sum = 0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum==n){
        printf("%d is perfect number ",n);
    }
    else{
        printf("%d is not perfect number ",n);
    }
    return 0;
}
