//1
//2 2
//3 3 3
//4 4 4 4

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}
