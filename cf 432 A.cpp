#include<stdio.h>
main()
{
	int n,k,ablem=0,t;
	scanf("%d%d",&n,&k);
	while(n--)
	{
		scanf("%d",&t);
		if(t<(5-k+1))
		{ablem++;}
	}
	printf("%d\n",ablem/3);
	return 0;
}