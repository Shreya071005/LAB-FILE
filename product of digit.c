//CALCULATE THE PRODUCT OF DIGIT OF NUMBER

#include<stdio.h>
int main()
{
    int n , pro, r;
    pro = 1;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        pro = pro*r;
        n=n/10;
    }
    printf("the product of the digit is %d", pro);
    return 0;
}
