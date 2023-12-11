//C program to print mirrored half diamond star pattern

#include <stdio.h>

int main()
{
    int i, j, n;
    int star, spaces;

    /* NUMBER OF COLUMN*/
    printf("Enter number of columns : ");
    scanf("%d", &n);

    spaces = n-1;
    star = 1;

    /* Iterate through rows */
    for(i=1; i<n*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");

        /* Print stars */
        for(j=1; j<=star; j++)
            printf("*");

        printf("\n");

        if(i < n)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }
    return 0;
}
