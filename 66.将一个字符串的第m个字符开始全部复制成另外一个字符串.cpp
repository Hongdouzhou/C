//66.将一个字符串的第m个字符开始全部复制成另外一个字符串
#include<stdio.h>
void fun(char *x,int m)
{
	char b[50];
	int i,j=0;
	for(i=m-1;*(x+i);i++)
		b[j++]=*(x+i);
	printf("The new string is:\n");
	b[j]=0;
	puts(b);
}
int main()
{
	char a[50],*p;
	int m;
	printf("Please input a string:\n");
	gets(a);
	printf("Please input m:\n");
	scanf("%d",&m);
	p=a;
	fun(p,m);
}