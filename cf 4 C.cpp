#include<stdio.h>
#include<string.h>
main()
{
	int n,i,k,count=0,x;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{a[i]=0;}
	char user[n][33];
	for(i=0;i<n;i++)
	{
		scanf("%s",&user[i]);
		
		for(k=0;k<i;k++)
		{
			if(strcmp(user[i],user[k])==0)
			{a[k]++;
			break;
			}
		}
		if(a[k]!=0)
		{
			printf("%s%d\n",user[i],a[k]);
		}
		else
		{
			printf("OK\n");
		}
	}
	return 0;
}