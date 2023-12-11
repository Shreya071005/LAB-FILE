//FIND THE HCF OF TWO NUMBER

#include<stdio.h>
int main()
{
    int n1 , n2 , i;
    printf("enter n1 \n");
    scanf("%d ",&n1);
    printf("enter n2 \n");
    scanf("%d ",&n2);
    int min = (n1<n2)? n1 : n2 ;
    int hcf = 1;
    for(i=1 ; i<= min ; i++)
        {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF OF %d and %d IS %d ",n1 , n2 , hcf) ;
    return 0;
}
