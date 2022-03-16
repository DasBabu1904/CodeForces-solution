#include<stdio.h>
main()
{
	int n,i=0,k=0,sum=0,count=0,me=0,swap=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
	}
   for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(ar[i]>ar[i+1])
			{
				swap=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		count++;
		me=me+ar[n-1-i];
		sum=sum-ar[n-1-i];
		if(me>sum)
		{
			printf("%d\n",count);
			return 0;
		}
	}
	return 0;
}

				