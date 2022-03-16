#include<stdio.h>
main()
{
	int ar[4];
	int i=0,j=0,x=0;
	int flag[8];
	scanf("%d%d%d%d",&ar[0],&ar[1],&ar[2],&ar[3]);
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(ar[j]>ar[j+1])
			{
				x=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=x;
			}
		}
	}
	x=0;
	
	for(i=0;i<4;i++)
	{
		if(ar[i]==ar[i+1])
		{x++;}
	}
	printf("%d\n",x);
	return 0;
}