//print n natural number from n to 1(reverse)

#include<stdio.h>
int main()
{
    int n , i;
    printf("enter the number");
    scanf("%d",&n);
    for(i = n; i>=1 ;i--){
        printf("%d ",i);
    }
    return 0;
}
