//CALCULATE DAYS INTO WEEK , YEAR , DAYS

#include<stdio.h>
int main()
{
    int days , week , year;
    printf("enter the days");
    scanf("%d",&days);

    //convert days to year week days
    year = days/365;
    week = (days%365)/7;
    days = (year*365)+(week*7);
    printf("year = %d \n ",year);
    printf("week = %d \n ",week);
    printf("days = %d \n ",days);
    return 0;
}
