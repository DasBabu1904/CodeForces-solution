#include<stdio.h>
main()
{
	int a,b,year=0;
	scanf("%d%d",&a,&b);
	while(1)
	{
		a=3*a;
		b=2*b;
		year++;
		if(a>b)
		{
			printf("%d\n",year);
			return 0;
		}
	}
	return 0;
}