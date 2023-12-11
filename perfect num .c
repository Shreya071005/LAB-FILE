//PRINT PERFECT NUMBER FROM 1 TO N

#include<stdio.h>
int main()
{
    int n , i , j , sum ;
    printf("enter the number of element");
    scanf("%d",&n);
    f(i=1;i<n;i++){
            sum = 0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum = sum + j;
            }
        }
    }
    if(sum == i){
        printf("%d is perfect number",i);
    }
    return 0;
}
