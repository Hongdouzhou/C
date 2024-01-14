//44.逆置
#include<stdio.h>
int main()
{
	int a[10]={-1,0,5,2,7,6,9,3,12,45},i,t;
	for(i=0;i<5;i++)
	{
		t=a[i];a[i]=a[9-i];a[9-i]=t;
	}
	printf("The altered array is:\n");
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
	return 0;
}