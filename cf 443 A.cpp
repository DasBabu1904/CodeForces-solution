#include<stdio.h>
#include<srting.h>
main()
{
	int i=0,obj=0;
	char set[1002];
	int count[26];
	for(i=0;i<26;i++)
	{count[i]=0;}
	gets(set);
	
	for(i=0;set[i]!='\0';i++)
	{
		if(set[i]>='a' && set[i]<='z')
		{ count[set[i]-97]++;}
	}
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)
		{ obj++;}
	}
	
	printf("%d\n",obj);
	return 0;
} 