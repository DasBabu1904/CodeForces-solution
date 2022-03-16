#include<stdio.h>
main()
{
	int n,h;
	scanf("%d%d",&n,&h);
	int i,x,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x<=h){count++;}
		if(x>h){count=count+2;}
	}
	printf("%d\n",count);
	return 0;
}