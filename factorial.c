//CALCULATE FACTORIAL OF A NUMBER

#include<stdio.h>
int main()
{
    int n , i , factorial ;
    factorial = 1;
    printf("enter the number");
    scanf("%d",&n);
    for(i = 1 ; i<= n ; ++i){
        factorial = factorial*i;
    }
        printf("%d ",factorial);
        return 0;
}
