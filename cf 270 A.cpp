#include<stdio.h>
main()
{
	int a,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(360%(180-a)==0)
		{
			printf("YES\n");
		}
		else
		{printf("NO\n");}
	}
	return 0;
}