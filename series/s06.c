//1+x+x/2!+x^3/3!+....x^n/n!

#include<stdio.h>

int main()
{
    float i,n,fact=1;
    printf("n=");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
       {
           fact=fact*i;

       }
    printf("sum=%.2f",fact);
}
