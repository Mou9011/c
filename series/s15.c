//1+(1+2)+(1+2+3)+......n

#include<stdio.h>

int main()
{
    float i,n,fact=1,sum=0;
    printf("n=");
    scanf("%f",&n);


       for(i=1;i<=n;i++)
       {

           sum=sum+i*(n-i+1);


       }
    printf("sum=%.2f",sum);
}
