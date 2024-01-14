//61.形参  ——> 指针    实参   ——>  数组
#include<stdio.h>
void fun(int *p)
{
	int i,j,t;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(*(p+j)<*(p+j+1))
			{
				t=*(p+j);*(p+j)=*(p+j+1);*(p+j+1)=t;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",*(p+i));
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
