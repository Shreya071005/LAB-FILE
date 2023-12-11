//AREA AND VOLUME OF CUBE

#include<stdio.h>
int main()
{
    int a , area , vol;
    printf("enter the side ");
    scanf("%d ",&a);
    area = 6*a*a;
    vol = a*a*a;
    printf("the area of cube is %d \n",area );
    printf("the volume of cube is %d \n", vol);
    return 0;
}
