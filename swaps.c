//WAP TO SWAP THREE NUMBER WITHOUT USING THREE VARIABLE

#include<stdio.h>
int main()
{
    int a , b , c;
    printf("the value of a , b and c \n");
    scanf("%d %d %d", &a , &b, &c);
    //BEFORE SWAPPING
    printf("the value of a is %d \n",a);
    printf("the value of b is %d \n",b);
    printf("the value of c is %d \n",c);
    //AFTER SWAPPING
    a = a+b+c;//sum of all number
    b = a-b-c;//subtract b and c value from above value then we get the value of a in b
    c = a-b-c;//similarly subtract value of c and new value of b from a
    a = a-b-c;//similarly subtract value of new c and new b from the sum of all
    printf("the value of new a is %d \n",a);
    printf("the value of new b is %d \n",b);
    printf("the value of new c is %d \n",c);
    return 0;
}
