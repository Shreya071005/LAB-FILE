//WAP to check the validate

#include<stdio.h>
int main()
{
    int pass = 6396;
    int n;
    printf("enter the password");
    scanf("%d",&n);
if(pass==n){
    printf("password is correct");
}
if(pass != n){
    printf("password is not correct");
}
return 0;
}
