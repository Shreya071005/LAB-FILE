//FIND QUADRATIC EQUATION

#include<stdio.h>
int main()
{
    int a ,b , c;
    printf("the value of a , b , c is :\n");
    scanf("%d %d %d",&a , &b , &c);
    float x1 , x2 , x , y , det;
    det = b*b-4*a*c;
    if(det>0){
        printf("the roots are real and distinct\n");
        x1 = (-b + sqrt(det))/2*a;
        x2 = (-b - sqrt(det))/2*a;
        printf("the roots are %f and %f",x1 , x2);
    }
    if(det==0){
        printf("the roots are equal \n");
        x1=x2= -b/2*a;
        printf("the roots are %f and %f",x1 , x2);
    }
    if(det<0){
        printf("the roots are imagenary \n");
        det = det * -1;
        x = -b/2*a;
        y = sqrt(det)/2*a;
        printf("roots are %f and %f",x , y);
    }
    return 0;
}

