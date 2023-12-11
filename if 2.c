//FIND THE MAXIMUM BETWEEN THREE NUMBER

#include<stdio.h>
int main()
{
    int a , b , c;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    printf("enter the number c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    else if (b>a && b>c){
        printf("%d is greatest",b);
    }
    else if (c>a && c>a){
        printf("%d is greatest",c);
    }
    else{
        printf("all are equal");
    }
    return 0;
}
