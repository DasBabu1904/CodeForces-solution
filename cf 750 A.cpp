#include<stdio.h>
main()
{
	int n,m,i,time=0;
	scanf("%d%d",&n,&m);
	m=240-m;
	for(i=1;i<=n;i++)
	{
		time=time+5*i;
		if(time==m)
		{
			printf("%d\n",i);
			return 0;
		}
		if(time>m)
		{
			printf("%d\n",i-1);
			return 0;
		}
	}
	printf("%d\n",n);
	return 0;
	
}
			
		
		