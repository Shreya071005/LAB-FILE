//PRINT PRIME NUMBER FROM 1 TO N

#include<stdio.h>
int main(){
 int i , j ,n;
 printf("enter the number");
 scanf("%d",&n);
    int count;
    for(i= 1 ; i<=n ; i++){
            count = 0;
        for(j=2 ; j<=i/2 ;j++){
            if(i%j==0){
                count++;
                   break;
        }
    }
    if(count==0 && i!=1){
        printf("%d \n",i);
}
    }
return 0;
}
