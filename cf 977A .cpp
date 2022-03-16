#include<stdio.h>
main()
{
	int x,k,i=0;
	scanf("%d%d",&x,&k);
	for(i=0;i<k;i++)
	{
		if((x%10)==0)
		{x=x/10;}
		else
		{x=x-1;}
	}
   printf("%d\n",x);
   return 0;
}