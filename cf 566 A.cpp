#include<stdio.h>
#include<string.h>
main()
{
	int n,ln;
	scanf("%d",&n);
	char ar[n+2];
	getchar();
	scanf("%s",ar);
	int i=0,yes=0,count=0, pair1=0,pair0=0,pair=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==ar[i+1])
		{
			count++;
		}
		if(ar[i]!=ar[i+1])
		{
			if(ar[i]=='1')
			{
				pair1=count+1;
			}
			if(ar[i]=='0')
			{
				pair0=count+1;
			}
			yes++;
			count=0;
		}
		if(yes>=2)
		{
			if(pair1<pair0)
			{
				pair=pair+pair1;
				pair0=pair0-pair1;
				pair1=0;
			}
			else if(pair0<pair1)
			{
				pair=pair+pair0;
				pair1=pair1-pair0;
				pair0=0;
			}
			else
			{
				pair=pair+pair1;
				pair1=0;
				pair0=0;
			}
		}
	}
	
	printf("%d",n-2*pair);
	return 0;
}
	
		
	