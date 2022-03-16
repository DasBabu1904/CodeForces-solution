#include<stdio.h>
main()
{
	int n,l,i,j,s;
	scanf("%d%d",&n,&l);
	int lamp[n],x=0;
	double r;
	for(i=0;i<n;i++)
	{
		scanf("%d",&lamp[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(lamp[j]>lamp[j+1])
			{
				s=lamp[j];
				lamp[j]=lamp[j+1];
				lamp[j+1]=s;
			}
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		if(lamp[i+1]-lamp[i]>x)
		{x=lamp[i+1]-lamp[i];}
	}
	r=x/2.00;
	if(r<l-lamp[n-1])
	{x=l-lamp[n-1];
	r=x/1.00;
	}
	if(r<lamp[0]-0)
	{x=lamp[0]-0;
	r=x/1.00;
	}
	printf("%.12f\n",r);
	return 0;
}