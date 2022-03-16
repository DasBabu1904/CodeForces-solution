#include<stdio.h>
main()
{
	int n,m,c,mishka=0,chris=0,i=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&m,&c);
		if(m>c)
		{mishka++;}
		else if(c>m)
		{chris++;}
	}
	if(mishka>chris)
	{printf("Mishka\n");}
	else if(chris>mishka)
	{printf("Chris\n");}
	else if(mishka==chris)
	{printf("Friendship is magic!^^\n");}
	return 0;
}