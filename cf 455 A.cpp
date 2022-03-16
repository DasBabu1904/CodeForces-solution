#include<stdio.h>
main()
{
	int n,i,x=0,point=0,count=0,sp=0,sn=0,p;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	n=n-1;
	sp=ar[x+1];
	
	while(1)
	{
		for(i=0;i<=n;i++)
		{
			if(i==n){sn=ar[i-1];}
			else if(i==0){sn=ar[i+1];}
			else if(i<n){sn=ar[i-1]+ar[i+1]; }
			if(ar[i]>=ar[x] && sn<=sp)
			{x=i;
			sp=sn;
			}
		}
		if(x==0 || x==p){sp++;}
		point=point+ar[x];
		
		if(x==0)
		{
			ar[x]=0;
			ar[x+1]=0;
			count++;
		}
		else if(x==n)
		{
			ar[x]=0;
			ar[x-1]=0;
			count++;
		}
		else if(x<n)
		{
			ar[x]=0;
			ar[x+1]=0;
			ar[x-1]=0;
			count++;
		}
		x=p;
		for(i=0;i<=n;i++)
		{printf("%d ",ar[i]);}
		printf("\n");
		if(count==n){break;}
	}
	printf("%d\n",point);
	return 0;
}


	