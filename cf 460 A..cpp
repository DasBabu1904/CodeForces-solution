#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,m,x=0,y=0,i,z;
	scanf("%d%d",&n,&m);
	x=n/m;
	while(1)
	{
		z=n;
		n=n+abs(x-y);
		x=z/n;
		y=n/m;
		if(x==y){break;}
	}
	printf("%d\n",n);
}
	