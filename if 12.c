//WAP TO PRINT WEEK NUMBER AND WEEK DAY

#include<stdio.h>
int main()
{
    int week;
    printf("ENTER THE WEEK NUMBER");
    scanf("%d",&week);
    if(week == 1){
        printf("MONDAY");
    }
    else if(week == 2){
        printf("TUESDAY");
    }
    else if(week == 3){
        printf("WEDNESDAY");
    }
    else if(week == 4){
        printf("THURSDAY");
    }
    else if(week == 5){
        printf("FRIDAY");
    }
    else if(week == 6){
        printf("SATURDAY");
    }
    else if(week == 7){
        printf("SUNDAY");
    }
    else{
        printf("invalid input! please enter any number between 1 to 7");
    }
    return 0;
}
