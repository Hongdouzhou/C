//48.文本作图
#include<stdio.h>
int main()
{
	int a[4][4]={0};
	int i,j,x=10;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i+j>=3)
				a[i][j]=x--;
		}
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	return 0;
}