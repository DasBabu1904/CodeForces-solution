#include<stdio.h>
#include<math.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k=2,y=3;
		scanf("%d",&n);
		
		while(n%y!=0)
		{
			k++;
	    	y=pow(2,k)-1;
		}
		printf("%d\n",n/y);
	}
	return 0;
}