#include<stdio.h>
main()
{
	int n,s,i,k,t,u;
	scanf("%d%d",&s,&n);
	int x[2][n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[0][i],&x[1][i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-1;k++)
		{
			if(x[0][k]>x[0][k+1])
			{
				u=x[0][k];
				x[0][k]=x[0][k+1];
				x[0][k+1]=u;
				t=x[1][k];
				x[1][k]=x[1][k+1];
				x[1][k+1]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(s>=x[0][i])
		{
			s=s+x[1][i];
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
}