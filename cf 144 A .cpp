#include<stdio.h>
main()
{
	int n,i,ans;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	int max=0,mx,min=ar[0],mn;
	
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
			mx=i;
		}
		if(ar[i]<=min)
		{
			min=ar[i];
			mn=i;
		}
	}
	
	if(mx>mn)
	{
		ans=n+mx-mn-2;
	}
	if(mn>mx)
	{
		ans=n+mx-1-mn;
	}
	
	if(mx==0 && mn==n-1)
	{printf("0\n");
	return 0;
	}
	printf("%d\n",ans);
	
	return 0;
}
		