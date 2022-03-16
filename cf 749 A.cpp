#include<stdio.h>
main()
{
	long long int n,i;
	scanf("%lld",&n);
	if(n%2==0)
	{
		printf("%lld\n",n/2);
		for(i=0;i<n/2;i++)
		{
			printf("2 ");
		}
	}
	else
	{
		printf("%lld\n",n/2);
		for(i=0;i<n/2-1;i++)
		{printf("2 ");}
		printf("3");
	}
	return 0;
}