#include<stdio.h>
main()
{
	int n,i,j;
	scanf("%d",&n);
	int ar[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0)
			{ar[i][j]=1;}
			else
			{ar[i][j]=ar[i-1][j]+ar[i][j-1];}
		}
	}
	printf("%d\n",ar[n-1][n-1]);
	return 0;
}