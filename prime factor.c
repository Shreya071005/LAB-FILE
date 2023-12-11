//FIND ALL PRIME FACTORS OF A NUMBER

#include<stdio.h>
int main()
{
    int n , j , i ;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=2 ; j<= i/2 ; j++){
        if(i%j==0)
            printf("%d ",i);
}
    }
return 0;
}
