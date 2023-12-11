//AREA AND VOLUME OF CUBOID

#include<stdio.h>
int main()
{
    int l , b , h;
    printf("the length breadth and height of cuboid ");
    scanf("%d %d %d" , &l , &b , &h);
    int area ;
    area = 2*((l*b)+(b*h)+(h*l));
    int vol;
    vol = (l*b*h);
    printf("the area of cuboid %d\n",area);
    printf("the volume of cuboid %d\n",vol);
    return 0;
}
