//1/1!+1/2!+1/3!+....1/n!

#include<stdio.h>

int main()
{
    float i,n,fact=1,sum=0;
    printf("n=");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
       {
           fact=fact*i;
           sum=sum+(1/fact);

       }
    printf("sum=%.2f",sum);
}
