//1
//0 0
//1 1 1
//0 0 0 0

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
            printf("%d\t",row%2);
        }
        printf("\n");
    }
}
