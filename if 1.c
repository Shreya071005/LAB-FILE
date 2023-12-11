//FIND THE MAX BETWEEN TWO NUMBER

#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d",a ,b);
    }
    else{
        printf("%d is greater than %d ",b , a);
    }
    return 0;
}
