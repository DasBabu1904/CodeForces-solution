#include<stdio.h>
main()
{
	long long int n;
	scanf("ll%d",&n);
	if(n%2==0)
	{printf("%lld\n",n/2);}
	if(n%2!=0)
	{printf("-%lld\n",n/2+1);}
	return 0;
}