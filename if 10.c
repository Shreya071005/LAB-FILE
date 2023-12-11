//FIND WHETHER VOWELS OR CONSONANTS

#include<stdio.h>
int main()
{
    char c;
    printf("enter the character ");
    scanf("%c",&c);
    if(c == 'a' || c == 'A'){
        printf("alphabet is vowel");
    }
    else if( c == 'e' || c == 'E'){
        printf("alphabet is vowel");
    }
    else if( c == 'i' || c == 'I'){
        printf("alphabet is vowel");
    }
    else if( c == 'o' || c == 'O'){
        printf("alphabet is vowel");
    }
    else if( c == 'u' || c == 'U' ){
        printf("alphabet is vowel");
    }
    else{
        printf("ALPHABET IS CONSTANT");
    }
    return 0;
}
