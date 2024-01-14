//54.EOF
#include<stdio.h>
int main()
{
	char c;
	int digit=0,character=0,space=0,other=0;
	printf("Please input a string:\n");
	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
			digit++;
		else if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			character++;
		else if(c==' ')
			space++;
		else
			other++;
	}
	printf("digit:%d\n",digit);
	printf("character:%d\n",character);
	printf("space:%d\n",space);
	printf("other:%d\n",other-1);
	return 0;
}