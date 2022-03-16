#include<stdio.h>
main()
{
	int q,i=0,r=0,n,a,rx;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&n);
		rx=n;
		
		if(n%2){n=n+1;}
		if(i==0){printf("%d\n",n); r=n;}
		if(i>0)
		{
		a=n/2-r;
		if(a>0){printf("%d\n",a);
		            r=rx;
		            }
		if(a<=0){printf("0\n");}
		}
	}
	return 0;
}

	
		