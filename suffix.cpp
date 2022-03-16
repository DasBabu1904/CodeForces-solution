#include<stdio.h>
main()
{
	int i=0,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int j=0,x;
		char ar[1002];
		scanf("%s",ar);
		for(j=0;ar[j]!='\0';j++)
		{}
		x=j;
		if(ar[x-1]=='o'&&ar[x-2]=='p')
		printf("FILIPINO\n");
	
		if(ar[x-1]=='u'&&ar[x-2]=='s'&&(ar[x-3]=='e'||ar[x-3]=='a')&&(ar[x-4]=='d'||ar[x-4]=='m'))
		printf("JAPANESE\n");
	
		if(ar[x-1]=='a'&&ar[x-2]=='d'&&ar[x-3]=='i' &&ar[x-4]=='n' && ar[x-5]=='m')
		printf("KOREAN\n");
	}
	return 0;
}