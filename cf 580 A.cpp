#include<stdio.h>
main()
{
	int n,i=0,count=0,x=0;
	scanf("%d",&n);
	long long int ar[n];
	
	for(i=0;i<n;i++)
	{scanf("%lld",&ar[i]);}
	
	for(i=0;i<n-1;i++)
	{
		if(ar[i]<=ar[i+1])
		{count++;}
		if(ar[i]>ar[i+1])
		{
			if(count>x)
			{
				x=count;
				count=0;
			}
		}
		if(i==n-2)
		{
			if(count>x)
			{
				x=count;
			}
		}
	}
	printf("%d",x+1);
	return 0;
} 