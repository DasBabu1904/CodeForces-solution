#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,m,x,y=0;
	scanf("%d%d",&n,&m);
	while(1)
	{
		x=n/m;
		n=n+abs(x-y);
		y=n/m;
		if(x-y==0){break;}
		printf("%d %d %d",n,x,y);
	}
	printf("%d\n",n);
	return 0;
}