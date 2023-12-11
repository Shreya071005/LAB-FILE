//TO CALCULATE GROSS  SALARY OF EMPLOYEE

#include<stdio.h>
int main()
{
    float  basic , gross , da , hra;
    printf("ENTER BASIC SALARY OF EMPLOYEE");
    scanf("%f",&basic);
    //calculate D.A and H.R.A according to specified condition
    if(basic <= 10000){
        da = basic * 0.8; // DA= BASIC SALARY * 80 /100
        hra = basic * 0.2;// HRA = BASIC SALARY * 20 /100
    }
    else if( basic <= 20000){
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else{
        da = basic* 0.95;
        hra = basic * 0.3;
    }
    //calculate gross product
    gross = basic + da + hra ;
    printf("the gross is %f",gross);
    return 0;
}
