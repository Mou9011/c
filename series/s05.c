//1+x+x/2!+x^3/3!+....x^n/n!

#include<stdio.h>
#include<math.h>
int main()
{
    float i,x,n,s=1,fact=1;
    printf("n=");
    scanf("%f",&n);
    printf("x=");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
       {
           fact=fact*i;
        s=s+(pow(x,i)/fact);
       }
    printf("sum=%.2f",s);
}
