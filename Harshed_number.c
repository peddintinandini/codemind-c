#include<stdio.h>
int main ()
{
    int a,r,s=0,n;
    scanf("%d",&n);
    a=n;
    while(n>10)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    if(n<10)
    {
        r=n;
        s=s+r;
    }
    if(a%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}