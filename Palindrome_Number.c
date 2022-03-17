#include<stdio.h>
int reverse(int n)
{
	int rev=0,r;
	while(n)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
}
return rev;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
	if(a[i]==reverse(a[i]))
	printf("True
");
	else
	printf("False
");
	
	}
}