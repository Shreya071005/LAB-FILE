 //TO CALCULATE PROFIT AND LOSS

#include<stdio.h>
int main()
{
    int SP , CP;
    printf("enter the SP");
    scanf("%d",&SP);
    printf("enter the CP");
    scanf("%d",&CP);
    if (SP > CP){
        printf("profit");
    }
    else if( CP > SP){
        printf("loss");
    }
    else{
        printf("neither profit nor loss");
    }
    return 0;
}
