#include<stdio.h>
int main()
{

    int i , j , n;
      printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=4;i++){
        for(j=1;j<=n;j++){
            if(j%2!=0){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
