 #include<stdio.h>
int main()
{
    int p , c , b , m , com;
    printf("enter the marks of subject physics , chemistry , biology , maths and computer: \n");
    scanf("%d %d %d %d %d \n", &p , &c , &b, &m , &com );
    int per = (p+b+c+m+com)/5;
    if(per >= 90){
        printf("GRADE A");
    }
    else if( per >= 80){
        printf("GRADE B");
    }
    else if(per >= 70){
        printf("GRADE C");
    }
    else if(per >= 60){
        printf("GRADE D");
    }
    else if(per >= 50){
        printf("GRADE E");
    }
    else{
        printf("FAIL");
    }
    return 0;
}
