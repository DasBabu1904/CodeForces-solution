#include<stdio.h>
main()
{
	int t,n,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n>2)
		{
		if(n%2!=0)
		{
			b=(n-1)/2;
			printf("%d\n",b);
		}
		else if(n%2==0)
		{
			b=n/2-1;
			printf("%d\n",b);
		}
		}
		else
		{printf("0\n");}
	}
	return 0;
}