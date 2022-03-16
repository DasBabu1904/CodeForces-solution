#include<stdio.h>
main()
{
	long long int ar[4];
	long long int i,k,s;
	for(i=0;i<4;i++)
	{scanf("%lld",&ar[i]);}
	for(k=0;k<4;k++)
	{
		for(i=0;i<4;i++)
		{
			if(ar[i]<ar[i+1])
			{
				s=ar[i+1];
				ar[i+1]=ar[i];
				ar[i]=s;
			}
		}
	}
	printf("%lld %lld %lld\n",ar[0]-ar[1],ar[0]-ar[2],ar[0]-ar[3]);
	return 0;
}
	
	
	
	