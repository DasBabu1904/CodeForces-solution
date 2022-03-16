#include<stdio.h>
main()
{
	int n,i=0,j=0,s;
	scanf("%d",&n);
	int m[n];
	
	for(i=0;i<n;i++)
	{scanf("%d",&m[i]);}
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(m[i]>m[i+1])
			{
				s=m[i];
				m[i]=m[i+1];
				m[i+1]=s;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{printf("%d ",m[i]);}
	return 0;
}