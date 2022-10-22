#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==0)
        {
            c++;
        }
    }
    for (i=0;i<c;i++)
    {
        a[i]=0;
    }
    for(i=c;i<n;i++)
    {
        a[i]=1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}