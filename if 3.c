//CHECK WHETHER NUMBER IS POSITIVE , NEGATIVE OR ZERO

#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    if(n>0){
        printf("number is positive");
    }
    else if (n<0){
        printf("number is negative");
    }
    else{
        printf("number is equal to zero");
    }
    return 0;
}
