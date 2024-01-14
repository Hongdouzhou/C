//65.求一个字符串的长度，要求用字符指针实现
#include<stdio.h>
int strlen(char *string)
{
	int l=0;
	while(*string)
	{
		l++;
		string++;
	}
	return l;
}
int main()
{
	char a[50],*p;
	printf("Please input a string:\n");
	gets(a);
	p=a;
	printf("The lenth is:%d\n",strlen(a));
	return 0;
}