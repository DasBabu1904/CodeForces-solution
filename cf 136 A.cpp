#include<stdio.h>
main()
{
	int n,i,j;
	scanf("%d",&n);
	int gift[n+1],who[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&gift[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(gift[i]==j)
			{ who[j]=i;}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d",who[i]);
	}
	
	return 0;
}