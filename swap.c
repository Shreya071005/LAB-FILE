#include<stdio.h>
int main()
{
    int v1 , v2 , temp;
    printf("the value of two integer \n");
    scanf("%d %d",&v1,&v2);
    //before swapping
    printf("first variable = %d \n", v1);
    printf("second variable = %d \n", v2);
    temp = v1;
    v1 = v2;
    v2 = temp;
    //after swapping
    printf(" NEW FIRST VARIABLE = %d \n", v1);
    printf("NEW SECOND VARIABLE = %d \n",v2);
    return 0 ;
}
