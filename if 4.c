//CHECK WHETHER NUMBER IS EVEN OR NOT

#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("NUMBER IS EVEN");
    }
    else{
        printf("NUMBER IS NOT EVEN");
    }
     return 0;
}
