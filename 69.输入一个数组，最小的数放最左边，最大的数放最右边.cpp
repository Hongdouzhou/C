//69.输入一个数组，最小的数放最左边，最大的数放最右边
#include<stdio.h>
void fun(int *x)
{
	int i,min,max,t;
	max=min=*x;
	for(i=1;i<=9;i++)
	{
		if(min>*(x+i))
			min=*(x+i);
		if(max<*(x+i))
			max=*(x+i);
	}
	while(min!=*x)
	{
		t=min;min=*x;*x=t;
	}
	if(max==*x)
		max=min;
	while(max!=*(x+9))
	{
		t=max;max=*(x+9);*(x+9)=t;
	}
	for(i=0;i<=9;i++)
		printf("%d ",*(x+i));
}
int main()
{
	int a[10],i,*p;
	printf("Please input an array:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	p=a;
	fun(p);
	return 0;
}