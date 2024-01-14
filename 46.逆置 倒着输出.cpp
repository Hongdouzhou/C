//46.逆置 倒着输出
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,t=0;
	printf("The altered array is:\n");
	for(i=4;i>=0;i--)
		printf("%d ",a[i]);
	return 0;
}