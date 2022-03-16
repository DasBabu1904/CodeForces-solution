#include<stdio.h>
main()
{
	int t,n,i=0;
	scanf("%d%d",&n,&t);
	int ar[n];
	n=n-1,t=t-1;
	for(i=0;i<n;i++)
	{scanf("%d",&ar[i]);}
	i=0;
	while(1)
	{
		i=i+ar[i];
		if(i==t)
		{
			printf("YES\n");
			return 0;
		}
		else if(i>t)
		{
			printf("NO\n");
			return 0;
		}
	}
}
		