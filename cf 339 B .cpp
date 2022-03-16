#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int house[m+1],i=0,ch=0;
	long long int time=0;
	house[0]=1;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&house[i]);
	}
	
	for(i=1;i<=m;i++)
	{
		if(house[i-1]<=house[i])
		{
			time+=house[i]-house[i-1];
		}
		else if(house[i-1]==n)
		{
			time+=house[i];
		}
		else if(house[i]<house[i-1])
		{
			time+=n+house[i]-house[i-1];
		}
	}
	
	printf("%lld\n",time);
	return 0;
}