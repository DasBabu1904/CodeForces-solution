#include<stdio.h>
main()
{
	int t,i=0;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<t;i++)
	{
		if(ar[i]==1)
		{
			printf("HARD\n");
			return 0;
		}
	}
	printf("EASY\n");
	return 0;
}

		
	