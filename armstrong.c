//ARMSTRONG NUMBER OR NOT

#include<stdio.h>
#include<math.h>
int main()
{
    int  n , r , q , t , p;
    int sum = 0;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&p);
    t = n;
    while(n!=0){
        r = n%10;
        q = pow (r,p);
        sum = sum+q;
        n=n/10;
    }
    if(sum == t){
        printf("%d is armstrong number",t);
    }
    else{
        printf("not a armstrong number");
    }
    return 0;
}
