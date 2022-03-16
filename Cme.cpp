#include<stdio.h>
main()
{
	int n,i=0,q,a,r;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&n);
		if(i==0)
		{
			a=n;
			r=a;
		}
		if(i>0)
		{
			if(n%2==0)
			{
				a=n/2-r;
				r=r+a;
			}
			if(n%2!=0)
			{
				a=(n+1)/2-r;
				r=r+a;
			}
			
		}
	printf("%d\n",a);	
	}
	return 0;
}