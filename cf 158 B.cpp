#include<stdio.h>
main()
{
	int n,i=1,x,count=0;
	scanf("%d",&n);
	int ar[5];
	for(i=1;i<=4;i++)
	{
		ar[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x==1){ar[1]++;}
		if(x==2){ar[2]++;}
		if(x==3){ar[3]++;}
		if(x==4){ar[4]++;}
	}
	count =count +ar[4];
	count=count+ar[3];
	ar[1]=ar[1]-ar[3];
	
	if(ar[1]<0)
	{
		if(ar[2]%2==0) 
		{count=count+ar[2]/2;}
		if(ar[2]%2!=0)
		{count=count+ar[2]/2+1;}
	}
	
	if(ar[1]>=0)
	{
		if(ar[1]%2==0)
		{
			ar[2] = ar[2]+ar[1]/2;
			if(ar[2]%2==0)
			{count=count+ar[2]/2;}
			if(ar[2]%2!=0)
			{count=count+ar[2]/2+1;}
		}
		if(ar[1]%2!=0)
		{
			if(ar[1]%4==3)
			{count=count+ar[2]/2+ar[1]/4+2;}
			else{count=count+ar[2]/2+ar[1]/4+1;}
		}
	}
	printf("%d\n",count);
	return 0;
}