#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n],min=99999,found=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        found=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d",i);
            break;
        }
    }
}