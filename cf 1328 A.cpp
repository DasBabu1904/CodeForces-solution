#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			if(a%b==0)
			{
				printf("0\n");
			}
			else
			{
				printf("%d\n",b-(a%b));
			}
		}
		else if(a<=b)
		{
			printf("%d\n",b-a);
		}
	}
	return 0;
}
