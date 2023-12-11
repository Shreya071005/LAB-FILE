//count total number of notes in given amount

#include<stdio.h>
int main()
{
    int amt;
    printf("enter the amount");
    scanf(" %d ",&amt);
    int n2000 , n500 , n100 , n50 , n10 , n20 , n5 , n1 , n2;
    if(amt >= 2000 ){
        n2000 = amt/2000;
        printf("n2000 is %d",n2000);
        amt = amt%2000;
    }
    if(amt >= 500){
        n500 = amt/500;
        printf("n500 is %d",n500);
        amt = amt%500;
    }
    if(amt >= 100){
        n100 = amt/100;
        printf("n100 is %d",n100);
        amt = amt%100;
    }
    if(amt >= 50){
        n50 = amt/50;
        printf("n50 is %d",n50);
        amt = amt%50;
    }
    if(amt >= 20){
        n20 = amt/20;
        printf("n20 is %d",n20);
        amt = amt%20;
    }
    if(amt >=10){
        n10 = amt/10;
        printf("n10 is %d",n10);
        amt = amt%10;
    }
    if(amt>=5){
        n5 = amt/5;
        printf("n5 is %d",n5);
        amt = amt%5;
    }
    if(amt>=2){
        n2 = amt/2;
        printf("n2 is %d",n2);
        amt = amt%2;
    }
    if(amt >= 1){
        n1 = amt/1;
        printf("n1 is %d",n1);
        amt = amt%1;
    }
    Else if{
        printf("the input is 0");
    }
    return 0;
}
