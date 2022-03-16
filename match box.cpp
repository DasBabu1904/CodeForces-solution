#include<stdio.h>
main()
{
	int q,i=0,r=1;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		int n,a;
		scanf("%d",&n);
		if(n%2!=0){n=n+1;}
		if(i==0)
		{
			a=n-r;
			printf("%d\n",a);
			r=n;
		}
		if(i>0)
		{
			a=(n/2)-r;
			if(a>0)
			{
				printf("%d\n",a);
				r=n/2;
			}
			if(a<=0)
			{
				printf("0\n");
			}
		}
	}
	return 0;
}