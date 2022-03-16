#include<stdio.h>
main()
{
	int k,r,i=1;
	scanf("%d%d",&k,&r);
	while(1)
	{
		if((k*i)%10==0 || (k*i)%10==r)
		{
			printf("%d\n",i);
			return 0;
		}
		i++;
	}
}
	