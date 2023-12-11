//CHECK WETHER THE TRIANGLE IS VALID OR NOT by their angle

#include<stdio.h>
int main()
{
    //angle a , b , c
    int a , b , c;
    printf("enter angle a");
    scanf("%d",&a);
    printf("enter angle b");
    scanf("%d",&b);
    printf("enter angle c");
    scanf("%d",&c);
    int sum;
    sum = a+b+c;
    if( sum == 180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is not valid ");
    }
    return 0;
}
