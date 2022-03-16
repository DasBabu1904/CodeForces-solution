#include<stdio.h>
main()
{
	int n,m;
	int i,k;
	char have;
	int color=0;
	scanf("%d%d",&n,&m);
	int in=m*n;
	for(i=0;i<in;i++)
	{
		getchar();
		scanf("%c",&have);
		if(have=='C' || have=='M' || have=='Y')
		{color++;}
	}
	
	if(color)
	{
		printf("#Color\n");
	}
	else
	{
		printf("#Black&White\n");
	}
	return 0;
}