//a
//a b
//a b c
//a b c d

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
            printf("%c\t",col+96);
        }
        printf("\n");
    }
}
