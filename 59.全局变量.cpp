//59.全局变量
#include<stdio.h>
int Max,Min;
void fun(int a[])
{
	int i;
	Max=Min=a[0];
	for(i=1;i<=9;i++)
	{
		if(Max<a[i])
			Max=a[i];
		else if(Min>a[i])
			Min=a[i];
	}
}
int main()
{
	int a[10],i;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	fun(a);
	printf("max:%d\nmin:%d\n",Max,Min);
	return 0;
}