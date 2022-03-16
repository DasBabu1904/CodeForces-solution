#include<stdio.h>
main()
{
	int n ;
	scanf("%d",&n);
	int ar[n];
	int i=0,one=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		if(ar[i]==1){one++;}
	}
	
	int count1=0,count0=0;
	int istart=0,iend=0;
	
	for(i=0;i<n;i++)
	{
		if(ar[i]==1){count1++;}
		else if(ar[i]==0 && count0==0)
		{
			count0++;
			istart=i;
			iend=i;
		}
		else if(ar[i]==0 && count1>0)
		{count0++;}
		
		if(ar[i]==0 && i>istart && i>iend)
		{iend=i;}
		if(count1>count0)
		{
			istart=istart+1;
			count1=0;
			count0=0;
		}
	}
	one=one+count0-count1;
    printf("%d\n",one);
    return 0;
}
	