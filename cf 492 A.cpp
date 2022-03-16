#include<stdio.h>
main()
{
	long long int n,x,i=0;
	scanf("%lld",&x);
	long long int sum=0;
	while(1)
	{
		n=i+1;
		sum=sum+((n)*(n+1)/2);
		if(sum>x)
		{break;}
		i++;
	}
	printf("%lld\n",i);
	return 0;
}
	
		