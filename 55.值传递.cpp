//55.值传递
#include<stdio.h>
int MAX(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int a,b;
	printf("Please input a,b:\n");
	scanf("%d%d",&a,&b);
	printf("max:%d\n",MAX(a,b));
	return 0;
}