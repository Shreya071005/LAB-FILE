 //CHECK TRIANGLE IS EQUATORIAL , ISOSCELES , OR SCALENE TRIANGLE

#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("THE VALUE OF SIDE a, b ,c \n");
    scanf("%d %d %d \n",&a , &b , &c);
    if(a==b && b==c){
        printf("equatorial triangle");
    }
    else if(a==b || b==c || a==c){
        printf("isosceles triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}
