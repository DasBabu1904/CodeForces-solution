#include<stdio.h>
#include<math.h>
main()
{
	int n,t,i=0;
	scanf("%d%d",&n,&t);
	if(n==1 && t==10)
	{printf("-1");}
	else if(t>=2 && t<10)
	{
		for(i=0;i<n;i++)
		{
			printf("%d",t);
		}
	}
	else if(t==10)
	{
		printf("1");
		for(i=0;i<n-1;i++)
		{
			printf("0");
		}
	}
	return 0;
	
}