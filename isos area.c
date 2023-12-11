//FIND THE AREA OF ISOSCELES TRIANGLE

#include<stdio.h>
#include<math.h>
int main()
{
    float a , b , isoarea;
    printf("the value of a , b \n");
    scanf("%f %f ",&a ,&b);
    isoarea = (b*sqrt((4*a*a)-(b*b)))/4;
    printf("the isoarea is %f ", isoarea);
    return 0;
