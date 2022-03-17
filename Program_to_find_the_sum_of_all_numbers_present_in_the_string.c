#include<stdio.h>
int main()
{
    char a[100];
    int sum=0,i;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(48<=a[i] &&a[i]<=57)
        {
            sum=sum+a[i]-48;
        }
    }
    printf("%d",sum);
}