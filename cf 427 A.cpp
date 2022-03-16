#include<stdio.h>
main()
{
	int n,police=0,crime=0,i=0,c=0,untreted=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		if(i==0 && c==-1)
		{untreted++;}
		else if(i>0 && police==0 && c==-1)
		{untreted++;}
		else if(i>0 && police>0 && c==-1)
		{police--;}
		else if(c>0)
		{police=police+c;}
	}
	printf("%d\n",untreted);
	return 0;
}