//51.二维数组的对称相等
#include<stdio.h>
int main()
{
	int a[4][4],i,j,flag=1;
	printf("Please input a second-dimensional array:\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
		printf("Yes\n");
	else if(flag==0)
		printf("No\n");
	return 0;
}