//WAP TO COUNT NUMBER

#include<stdio.h>
int main()
{
    int n ;
    int count = 0;
    printf("enter the number ");
    scanf("%d",&n);
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("the number of digit in given number is %d",count);
    return 0;
}
