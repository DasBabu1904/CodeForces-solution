#include<stdio.h>
#include<stdlib.h>
main()
{
	long long int a,b,n;
	scanf("%lld",&n);
	if(n<0)
	{
		a=abs(n%10);
		n=n/10;
		b=abs(n%10);
		n=n/10;
		if(a>=b)
		{
			n=n*10-b;
		}
		else
		{
			n=n*10-a;
		}
	}
	printf("%lld\n",n);
	return 0;
}