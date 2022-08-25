//1
//0 1
//1 0 1
//0 1 0 1

#include<stdio.h>
int main()
{
    int row,col,n,x,y;
    printf("n=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {    if(row%2==0)
          {
           x=1;
           y=0;
          }
           else
           {x=0;
           y=1;
           }
        for(col=1;col<=row;col++)
        {   if(col%2==0)
            printf("%d",x);
            else
           printf("%d",y);
        }
        printf("\n");
    }
}
