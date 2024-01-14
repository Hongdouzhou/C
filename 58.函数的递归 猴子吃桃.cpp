//58.函数的递归 猴子吃桃
#include<stdio.h>
int peach(int day)
{
	if(day==10)
		return 1;
	else
		return ((peach(day+1)+1)*2);
}
int main()
{
	int day,sum;
	printf("Please input day:\n");
	scanf("%d",&day);
	sum=peach(day);
	printf("peach:%d\nday:%d\n",sum,day);
	return 0;
}