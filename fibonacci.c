#include<stdio.h>
void fibonacci(int);
int main()
{
 int n;
 scanf("%d",&n);
 fibonacci(n);
 return 0;
}
void fibonacci(int x)
{
 int a=0,b=1,c,i;
 printf("%d %d ",a,b);
 c=a+b;
 for(i=3;i<=x;i++)
 {
 printf("%d ",c);
 a=b;
 b=c;
 c=a+b; 
 }
}