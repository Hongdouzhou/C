//67.把第1到第m个字符，平移到字符串的最后；再把第m+1到最后的字符移动到字符串的前部。
#include<stdio.h>
void fun(char *x,int m)
{
	int i,j=0;
	char b[50];
	for(i=m+1;*(x+i);i++)
		b[j++]=*(x+i);
	for(i=0;i<=m;i++)
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
	p=a;
	printf("Please input m:\n");
	scanf("%d",&m);
	fun(p,m);
}