//CHECK WHETHER THE TRIANGLE IS VALID OR NOT BY THEIR SIDE

#include<stdio.h>
int main()
{
    int a , b , c;
    printf("enter a , b , c value \n");
    scanf("%d %d %d \n" ,&a , &b , &c);
    if(a+b<=c || b+c<=a || a+c<=b){
        printf("the triangle is valid");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}
