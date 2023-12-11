#include<stdio.h>
int main()
{
    int i , j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            int sum;
            sum = i + j;
            if(sum%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

