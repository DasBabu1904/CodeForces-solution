#include<stdio.h>
#include<string.h>
main()
{
	int length=0,i=0;
	char ar[101];
	scanf("%s",ar);
	int count[26];
	for(i=0;i<26;i++)
	{count[i]=0;}
	
	for(i=0;ar[i]!='\0';i++)
	{
		count[ar[i]-97]++;
	}
	
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)
		{
			length++;
		}
	}
	if(length%2==0)
	{printf("CHAT WITH HER!\n");}
	if(length%2!=0)
	{printf("IGNORE HIM!\n");}
	return 0;
}
	