//63.形参  ——> 指针    实参   ——>  指针
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
	int a[10],i,*t;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",t+i);
	fun(t);
	return 0;
}
