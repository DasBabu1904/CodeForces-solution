#include<stdio.h>
#include<string.h>
main()
{
	int n,i,k,count=0,x;
	scanf("%d",&n);
	char user[n][33];
	for(i=0;i<n;i++)
	{
		scanf("%s",user[i][0]);
		for(k=0;k<i;k++)
		{
			if(strcmp(user[i],user[k])==0)
			{count++;}
		}
		if(count!=0)
		{
			printf("%s%d",user[i][0],count);
			count=0;
		}
		else
		{
			printf("OK\n");
		}
	}
	return 0;
}