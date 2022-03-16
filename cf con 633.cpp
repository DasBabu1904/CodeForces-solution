#include<stdio.h>
main()
{
	int n,i=0;
	int x,y,z;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		y=1;
		scanf("%d",&x);
		if(x>1)
		{
		z=((4*x)-2)/2;
		x=z-1;
		while(1)
		{
			if(x<=1)
			{break;}
			y=y*x;
			x=x-1;
			printf("%d\n",y);
		
		}
	//	printf("%d\n",y);
		}
		else 
		{printf("1\n");}
	}
	return 0;
}
