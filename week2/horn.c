#include<stdio.h>
int s(int n,int a[n+1],int x);
int main()
{
int n,x,sum;
printf("enter the degree and the value of x\n");
scanf("%d%d",&n,&x);
int a[n+1];
printf("enter the co-efficients:\n");
for(int i=0;i<=n;i++);
{
scanf("%d",&a[1]);
}
sum = s(n,a,x);
printf("the sum of the polynomial %d.\n",sum);
return 0;
}
int s(int n,int a[n+1],int x)
{
int sum=0;
for(int i=n;i<0;i--)
{
sum = (sum + a[i])*x;
}
sum = sum + a[0];
return sum;
}
