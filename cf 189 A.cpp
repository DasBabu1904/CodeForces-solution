#include<stdio.h>
main()
{
	int n,i,k,s;
	scanf("%d",&n);
	int ar[3];
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
	
	i=1;
	if(n%ar[0]==0)
	{printf("%d",n/ar[0] );}
	else
	{
		while(1)
		{
		n=n-ar[1];
		if(n%ar[0]==0)
		{printf("%d",(n/ar[0])+i);
		return 0;
		}
		else
		{
			n=n-ar[2];
			if(n%ar[0]==0)
			{printf("%d",(n/ar[0])+2*i);
			return 0;
			}
		}
		i++;
		}
	}
}
				