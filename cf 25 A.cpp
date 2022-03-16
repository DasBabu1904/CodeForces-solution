#include<stdio.h>
main()
{
	int n,i,j,k,odd=0,even=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{even++;}
		if(ar[i]%2!=0)
		{odd++;}
		
		if(even>1)
		{
			for(j=0;j<n;j++)
			{
				if(ar[j]%2!=0)
			    {
			    	printf("%d",j+1);
			    	return 0;
			    }
			}
		}
		if(odd>1)
		{
			for(k=0;k<n;k++)
			{
				if(ar[k]%2==0)
				{
					printf("%d",k+1);
					return 0;
				}
			}
		}
	}
}