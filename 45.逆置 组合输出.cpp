//45.逆置 组合输出
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,t=0;
	for(i=4;i>=0;i--)
		t=10*t+a[i];
	printf("The altered number is:\n");
	printf("%d",t);
	return 0;
}