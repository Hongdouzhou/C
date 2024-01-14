//68.用指针编写函数  实现两个字符串的大小比较
#include<stdio.h>
void fun(char *x1,char *x2)
{
	int t=0,m=0,n=0,i=0;
	while(*(x1+i)&&*(x2+i))
	{
		if(*(x1+i)>*(x2+i))
			t++;
		else if(*(x1+i)==*(x2+i))
			m++;
		else if(*(x1+i)<*(x2+i))
			n++;
		i++;
	}
	if(t>n)
		printf("string a > string b\n");
	else if(t==n)
		printf("string a = string b\n");
	else
		printf("string a < string b\n");
}
int main()
{
	char a[50],b[50],*p1,*p2;
	int t;
	printf("Please input string a,b:\n");
	gets(a);
	gets(b);
	p1=a;
	p2=b;
	fun(p1,p2);
	return 0;
}