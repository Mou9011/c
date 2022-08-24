//  *     *
//   *   *
//     *
//   *   *
//  *     *


#include <stdio.h>

int main()

{
    int row, col, n;

    printf("n=");

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        // n = n + 1;

        n = n - 1;
    }

    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= n; col++)
        {

            if (row == col || col + row == n + 1)
            {

                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        printf("\n");
    }
}
