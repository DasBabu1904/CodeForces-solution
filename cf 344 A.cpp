#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int mag[n],i=0;
	int count=0;
	for(i=0;i<n;i++)
	{scanf("%d",&mag[i]);}
	
	for(i=0;i<n-1;i++)
	{
		if(mag[i]!=mag[i+1])
		{ count++;}
	}
	printf("%d\n",count+1);
	
	return 0;
}
	