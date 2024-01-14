//52.二维数组的行列互换
#include<stdio.h>
int main()
{
	int a[4][4],b[4][4],i,j;
	printf("Please input a second-dimensional array:\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			b[j][i]=a[i][j];
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			printf("%-4d",b[i][j]);
		printf("\n");
	}
	return 0;
}