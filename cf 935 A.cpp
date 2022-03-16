#include<stdio.h>
main()
{
	long long int n,i,count=0;
	scanf("%lld",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
	{count++;}
	}
	printf("%lld",count+1);
	return 0;
}