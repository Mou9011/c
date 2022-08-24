//A
//B B
//C C C
//D D D D

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
            printf("%c\t",row+64);
        }
        printf("\n");
    }
}
