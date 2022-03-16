#include<stdio.h>
main()
{
	int ar[3];
	int i,k,distance,s;
	scanf("%d%d%d",&ar[0],&ar[1],&ar[2]);
	for(i=0;i<3;i++)
	{
		for(k=0;k<2;k++)
		{
			if(ar[k]>ar[k+1])
			{
				s=ar[k];
				ar[k]=ar[k+1];
				ar[k+1]=s;
			}
		}
	}
	distance=ar[2]-ar[0];
	printf("%d\n",distance);
	return 0;
}