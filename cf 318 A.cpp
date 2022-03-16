#include<stdio.h>
main()
{
	long long int n,x,k;
	scanf("%lld%lld",&n,&k);
	if(n%2!=0){x=n/2+1;}
	else{x=n/2;}
	
	if(k<=x)
	{
		printf("%lld",(2*k)-1);
		return 0;
	}
	else
	{
		printf("%lld",(k-x)*2);
		return 0;
	}
	return 0;
}
	