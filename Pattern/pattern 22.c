//  * * * *
//  *     *
//  *     *
//  * * * *


#include<stdio.h>
int main()
{
    int row,col,n;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {

        for(col=1;col<=n;col++)
        {
            if(row==1||row==n||col==1||col==n)
            printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

}
