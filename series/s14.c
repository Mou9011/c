//1+(1+2)+(1+2+3)+......n

#include<stdio.h>

int main()
{
    float i,n,fact=1,sum=0,j;
    printf("n=");
    scanf("%f",&n);
    while(i<=n)
   {
       for(j=1;j<=i;j++)
       {

           sum+=j;

       }
       i++;
       }
    printf("sum=%.2f",sum);
}
