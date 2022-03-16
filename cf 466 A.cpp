#include<stdio.h>
main()
{
	int cost=0,n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	if(n*a>=(n/m +1)*b)
	{
	cost=(n/m)*b;
	n=n%m;
	if(n*a<b)
	{
		cost=cost+n*a;
	}
	else
	{
		cost=cost+b;
	}
	}
	else
	{
		cost=n*a;
	}
	printf("%d\n",cost);
	return 0;
}