//62.形参  ——> 数组    实参   ——>  指针
#include<stdio.h>
void fun(int x[])
{
	int i,j,t;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(x[j]<x[j+1])
			{
				t=x[j];x[j]=x[j+1];x[j+1]=t;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",x[i]);
}
int main()
{
	int a[10],i,*p;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",p+i);
	fun(p);
	return 0;
}