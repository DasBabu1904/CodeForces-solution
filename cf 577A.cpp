#include<stdio.h>
main()
{
	int n,x;
	scanf("%d%d",&n,&x);
	int limit=n;
	int i=1,j=1;
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(x%i==0)
		{
			if(x/i<=n)
			{count++;}
		}
	}
	printf("%d\n",count);
	
	return 0;
}