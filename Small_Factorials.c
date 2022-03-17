#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],j,fac=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {fac=1;
        for(j=1;j<=a[i];j++)
        {
            fac=fac*j;
        }
        printf("%d
",fac);
    }
}