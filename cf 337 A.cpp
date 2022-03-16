#include<stdio.h>
main()
{
	int n,m,i=0,j=0,k=0,x=0,y=0,s;
	scanf("%d%d",&n,&m);
	int num[m],def=0;
	for(i=0;i<m;i++)
	{scanf("%d",&num[i]);}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(num[j]<num[j+1])
			{
				s=num[j];
				num[j]=num[j+1];
				num[j+1]=s;
			}
		}
	}
	
	def=def+num[0]-num[n-1];
	int possible=def;
	
	for(i=0,k=n-1;k<m-1;k++,i++)
	{
		def=def-num[i]+num[i+1]+num[k]-num[k+1];
		if(def<possible)
		{possible=def;}
	}
	printf("%d\n",possible);
	return 0;

}

		