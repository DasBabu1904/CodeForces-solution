#include<stdio.h>
#include<stdlib.h>

main()
{
int t,r=0;
scanf("%d",&t);
for(r=0;r<t;r++)
{
	int n,i;
	int s=0,x,y;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{scanf("%d",&ar[i]);}
	int j=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-3;j++)
		{
			x=abs(ar[i]-ar[i+1]);
			y=abs(ar[i+1]-ar[i+2]);
			if(y<x)
			{
				s=ar[i];
				ar[i]=ar[i+2];
				ar[i+1]=ar[i];
				ar[i+2]=s;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}
return 0;
	
}