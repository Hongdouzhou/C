//50.一维数组的对称相等
#include<stdio.h>
int main()
{
	int a[10],i,t=1;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]!=a[10-1-i])
		{
			t=0;
			break;
		}
	}
	if(t==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}