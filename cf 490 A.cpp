#include<stdio.h>
main()
{
	int n;
	int a,i=0;
	int prog=0,math=0,phy=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1)
		{prog++;}
		if(a==2)
		{math++;}
		if(a==3)
		{phy++;}
	}
	if((prog<phy || phy<prog)&& ( math<prog || math<phy))
	{printf("%d",math);}
	if((prog<math || math<prog)&& (phy<prog|| phy<math))
	{printf("%d",phy);}
	if((math<phy || phy<math) && (prog<math || prog<phy))
	{printf("%d",prog);}	
	return 0;
}