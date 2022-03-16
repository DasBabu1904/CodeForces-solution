#include<stdio.h>
main()
{
	int n,a=0,i=0,x=0;
	scanf("%d",&n);
	char ar[n+1];
	scanf("%s",ar);
	for(i=0;i<=n;i++)
	{
		if(ar[i]==ar[i+1])
		{a++;}
		if(ar[i]!=ar[i+1])
		{
			x=x+a;
			a=0;
		}
	}
		printf("%d",x);
		return 0;
}