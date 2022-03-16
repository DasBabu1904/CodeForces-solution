#include<stdio.h>
main()
{
	int n,p,q,i,j,k,cheak=0;
	scanf("%d",&n);
	scanf("%d",&p);
	int x[p];
	for(i=0;i<p;i++)
	{
		scanf("%d",&x[i]);
	}
	
	scanf("%d",&q);
	int y[q];
	for(i=0;i<q;i++)
	{
		scanf("%d",&y[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<p;j++)
		{if(x[j]==i){cheak++;}}
		for(k=0;k<q;k++)
		{if(y[k]==i){cheak++;}}
		
		if(cheak!=0){cheak=0;}
		else
		{
			printf("Oh, my keboard!\n");
			return 0;
		}
	}
	printf("I become the guy");
	return 0;
}
		