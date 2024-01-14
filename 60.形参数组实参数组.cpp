//60.形参  ——> 数组    实参   ——>  数组
#include<stdio.h>
void fun(int a[])
{
	int i,j,t;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[10],i;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	fun(a);
	return 0;
}