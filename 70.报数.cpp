//70.报数
#include<stdio.h>
int main()
{
	int i,n,b,flag=0,a[100];
	scanf("%d",&n);
	b=n;
	for(i=1;i<=n;i++)
		a[i]=1;
	for(i=1;;i++)
	{
		if(i==n+1)
			i=1;
		if(a[i]==1)
			flag++;
		else
			continue;
		if(flag==3)
		{
			flag=0;
			a[i]=0;
			b--;
		}
		if(b==1)
			break;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==1)
			printf("%d\n",i);
	}
	return 0;
}