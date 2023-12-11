//FIND THE AREA OF RIGHT TRIANGLE

#include<stdio.h>
int main()
{
    float b,h;
    printf("enter the breadth and height of triangle\n ");
    scanf("%f %f ",&b , &h);
    float area;
    area = 1/2 * b * h;
    printf("the area of triangle is %f ",area);
    return 0;
}
