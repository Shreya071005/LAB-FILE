//PRINTF THE SUM OF ALL PRIME NUMBER FROM 1 TO N

#include<stdio.h>
int main()
{
    int i , j , n;
    int count;
    int sum = 0;
    printf("enter the number of element");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count = 0 ;
        for(j=2; j<=i/2 ;j++){
                if (i%j==0){
            count++;
            break;
        }
    }
    if(count==0 && i!=1){
        sum = sum + i ;
    }
    }
    printf("the sum of prime number upto n is %d",sum);
    return 0;
}
