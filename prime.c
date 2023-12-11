//FIND PRIME OR not

#include<stdio.h>
int main()
{
    int n  , i , a;
    a = 0;
    printf("enter the number");
    scanf("%d",&n);
    for(i = 2; i < n ; i++){
        if(n%i == 0){
        a = 1;
        break;
        }
    }
        if(a == 0){
            printf("number is prime");
        }
        else{
            printf("composite number");
        }
        return 0;
}
