//56.地址传递---（数组的排序）
#include<stdio.h>
void sort(int a[])
{
	int i,j,k,t;
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		{
			if(a[k]<a[j])
				k=j;
		}
		t=a[k];a[k]=a[i];a[i]=t;
	}
	for(i=0;i<=9;i++)
		printf("%d ",a[i]);
}
int main()
{
	int a[10],i;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	sort(a);
	return 0;
}