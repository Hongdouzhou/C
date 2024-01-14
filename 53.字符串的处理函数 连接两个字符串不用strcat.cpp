//53.字符串的处理函数 连接两个字符串不用strcat
#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	int l,i=0;
	printf("Please enter string a,string b:\n");
	gets(a);
	gets(b);
	l=strlen(a);
	while(b[i]!=0)
	{
		a[l++]=b[i];
		i++;
	}
	a[l]=0;
	puts(a);
	return 0;
}