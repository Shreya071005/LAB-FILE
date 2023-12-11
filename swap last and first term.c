//SWAP FIRST AND THE LAST DIGIT

#include<stdio.h>
int main()
{
    int n , r , t;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    r = n%10;
    printf("THE LAST DIGIT IS %d \n",r);
    while(n>=10){
        n=n/10;
    }
    printf("THE FIRST DIGIT IS %d \n",n);
    t = n;
    n = r;
    r = t;
    //AFTER SWAPPING THE FIRST AND THE LAST NUMBER
    printf("THE LAST DIGIT IS %d \n",r);
    printf("THE FIRST DIGIT IS %d \n",n);
    return 0;
}
