//check whether palindrome or not(reverse must be same )

#include<stdio.h>
int main()
{
    int n , r , rev=0 , t;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        r = n%10;
        rev = (rev*10)+r;
        n = n/10;
    }
    if (rev == t){
        printf("number is pallindrome");
    }
    else {
        printf("number is not palindrome");
    }
    return 0;
}
