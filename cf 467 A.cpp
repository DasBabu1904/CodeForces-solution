#include<stdio.h>
main()
{
	int n,p,q,i=0,f,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&q,&p);
		f=p-q;
		if(f>=2)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
		