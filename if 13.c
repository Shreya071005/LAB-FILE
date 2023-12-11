//WRITE MONTH NUMBER AND PRINT DAYS IN THAT MONTH

#include<stdio.h>
int main()
{
    int month;
    printf("MONTH NUMBER \n");
    scanf("%d", &month);
    if(month == 1){
        printf("31 days in this month");
    }
    else if(month == 2){
        printf("28 days in this month \n");
        printf("but for leap year 29 days");
    }
    else if(month == 3){
        printf("31 days in this month");
    }
    else if(month == 4){
        printf("30 days in this month");
    }
    else if(month == 5){
        printf("31 days in this month");
    }
    else if(month == 6){
        printf("30 days in this month");
    }
    else if(month == 7){
        printf("31 days in this month");
    }
    else if(month == 8){
        printf("31 days in this month");
    }
    else if(month == 9){
        printf("30 days in this month");
    }
    else if(month == 10){
        printf("31 days in this month");
    }
    else if(month == 11){
        printf("30 days in this month");
    }
    else if(month == 12){
        printf("31 days in this month");
    }
    else{
        printf("invalid number!");
    }
    return 0;
}

