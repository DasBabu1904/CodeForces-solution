#include<stdio.h>
main()
{
	int n,i,max=0,spent=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		if(ar[i]>max)
		{max=ar[i];}
	}
	for(i=0;i<n;i++)
	{
		spent=spent+max-ar[i];
	}
	printf("%d\n",spent);
	return 0;
}