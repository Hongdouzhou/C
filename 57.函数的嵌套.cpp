//57.函数的嵌套 1!+2!+3!+...+n!
#include<stdio.h>
int fun2(int i)
{
	int j;
	long k=1;
	for(j=1;j<=i;j++)
		k*=j;
	return k;
}
int fun1(int n)
{
	int i;
	long s=0;
	for(i=1;i<=n;i++)
		s+=fun2(i);
	return s;
}
int main()
{
	int n;
	long sum;
	printf("Please input n:\n");
	scanf("%d",&n);
	sum=fun1(n);
	printf("sum:%d\n",sum);
	return 0;
}