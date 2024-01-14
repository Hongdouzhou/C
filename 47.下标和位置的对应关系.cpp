//47.下标和位置的对应关系
#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	printf("Please enter a two-dimensional array:\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
	}
	printf("The two-dimensional array is:\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	return 0;
}