#include<stdio.h>
main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)==2)
	{
		x=x|y;
		printf("%d\n",x);
	}
	return 0;
}