#include<stdio.h>
main()
{
	int n,m,r,i,j;
	scanf("%d%d",&n,&m);
	
	for(r=1;r<=n;r++)
	{
		if(r%2!=0)
		{
			for(i=0;i<m;i++)
			{printf("#");}
		}
		else
		{
			if(r%4==0)
			{
				for(i=0;i<m;i++)
				{
					if(i==0){printf("#");}
					else{printf(".");}
				}
			}
			else
			{
				for(i=1;i<=m;i++)
				{
					if(i==m)
					{printf("#");}
					else{printf(".");}
				}
			}
		}
	printf("\n");
	}
	return 0;
}