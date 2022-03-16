#include<stdio.h>
main()
{
	int flag[26],i=0;
	for(i=0;i<26;i++)
	{
		flag[i]=0;
	}
	int n;
	scanf("%d",&n);
	char line[n+2];
	scanf("%s",line);
	
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]<97)
		{
			flag[line[i]-65]++;
		}
		if(line[i]>=97)
		{
			flag[line[i]-97]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(flag[i]==0)
		{
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
}
	