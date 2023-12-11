//CHECK WHETHER THE NUMBER IS DIVISIBLE BY 5 AND 11 OR not

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d ",&n);
    if(n%5==0 && n%11==0){
        printf("number is divisible by 5 and 11");
    }
    else{
        printf("number is not divisible by 5 and 11");
    }
    return 0;
}
