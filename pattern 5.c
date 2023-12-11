//C program to print half diamond star pattern series.


#include<stdio.h>

int main()
{
    int i, j, n, columns;

    /* number of column */
    printf("Enter number of columns:");
    scanf("%d",&n);

    columns=1;

    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < n)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }
        printf("\n");
    }
    return 0;
}
