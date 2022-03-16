#include<stdio.h>
main()
{
	int y;
	scanf("%d",&y);
	int a,b,c,d;
	
	while(1)
	{
		y++;
		a=y;
		d=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		b=a%10;
		a=a/10;
		
		if(a!=b&&b!=c && c!=d && d!=a && b!=d&& c!=a)
		{
			printf("%d\n",y);
			return 0;
		}
	}
	return 0;
}