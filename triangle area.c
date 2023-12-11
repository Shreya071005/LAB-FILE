//FIND THE AREA OF TRIANGLE WITH THREE SIDE

#include<stdio.h>
#include<math.h>
int main()
{
    float a , b , c , s , area;
    printf("the value of a , b, c is:");
    scanf("%f %f %f ",&a,&b,&c);
    s = (a+b+c)/2;//semiperimeter
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle with three side %f \n",area );
    return 0;
}
