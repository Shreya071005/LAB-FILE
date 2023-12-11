//FIBONACCI SERIES

#include<stdio.h>
int main()
{
    int t1=0 , t2=1 , t3;
    int n , i;
    t3=t1 + t2;
    printf("enter the number of element");
    scanf("%d",&n);
        printf("%d %d\n",t1 , t2);

    for(i=2;i<=n;++i){
        printf("%d",t3);
        t1=t2;
        t2=t3;
        t3=t1 + t2;
    }
    return 0;
}
