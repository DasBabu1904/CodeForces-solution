#include<stdio.h>
main()
{
	int capacity=0,a,b,n,x=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		x=x+(b-a);
		if(x>capacity)
		{
			capacity=x;
		}
	}
	printf("%d\n",capacity);
	return 0;
}
	
		