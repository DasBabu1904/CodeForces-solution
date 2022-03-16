#include<stdio.h>
main()
{
	int n,b,x=0,y=0,s;
	scanf("%d%d",&n,&b);
	s=n;
	while(1)
	{
		y=n/b;
		x=n/b+x;
		n=n%b+y;
		if(n/b==0)
		{printf("%d\n",s+x);
     	return 0;
		}
	}
	
}
		