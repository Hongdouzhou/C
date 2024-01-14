//64.用指针指向字符串
#include<stdio.h>
int main()
{
	int i=0,j=0;
	char a[50],b[50]={'0'},*p;
	printf("Please input string a:\n");
	gets(a);
	p=a;
	while(p[i]!=0)
	{
		if(p[i]>='0'&&p[i]<='9')
			b[j++]=p[i];
		i++;
	}
	b[j]=0;
	puts(b);
	return 0;
}