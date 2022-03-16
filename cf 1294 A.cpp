
#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ar[4],i=0,k=0,n;
		
		scanf("%d%d%d%d",&ar[0],&ar[1],&ar[2],&n);
	
		
		for(i=0;i<3;i++)
		{
			for(k=0;k<2;k++)
			{
				if(ar[k]>ar[k+1])
				{
				int s=ar[k];
				ar[k]=ar[k+1];
				ar[k+1]=s;
				}
			}
		}
		
		int eq=n-2*ar[2]+ar[1]+ar[0];
		
		if(eq>=0 && eq%3==0)
		{
			{printf("YES\n");}
		}
		else
		printf("NO\n");
	}
	return 0;
}