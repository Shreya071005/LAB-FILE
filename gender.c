//Print the gender by name

#include<stdio.h>
int main()
{
    char gender ;
    printf("enter the character");
    scanf("%c",&gender);
    if(gender== 'm' && gender == 'M'){
        printf("male");
    }
    else if(gender == 'f' && gender == 'F'){
        printf("female");
    }
    else{
        printf("none");
    }
    return 0;
}
