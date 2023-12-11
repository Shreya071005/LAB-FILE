//POWER OF A NUMBER USING FOR LOOP

#include<stdio.h>
#include<math.h>
int main()
{
    int n , i , p ;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&p);
    for(i=1;i<=n;i++){
    int q;
    q = pow(i,p);
    printf("%d \t",q);
    }
    return 0;
}
