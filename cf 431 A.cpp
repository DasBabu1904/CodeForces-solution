#include<stdio.h>
main()
{
	int i=0;
	int cal[5];
	for(i=1;i<5;i++)
	{scanf("%d",&cal[i]);}
	
	int count[5];
	for(i=1;i<5;i++)
	{count[i]=0;}
	
	int total_cal=0;
	char s[100002];
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		count[s[i]-48]++;
	}
	
	for(i=1;i<5;i++)
	{
		total_cal=total_cal+ cal[i]*count[i];
	}
	
	printf("%d\n",total_cal);
	return 0;
}
	
	