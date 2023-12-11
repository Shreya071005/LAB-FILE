//C program to print reverse pyramid star pattern 

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* NUMBER OF ROWS */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
