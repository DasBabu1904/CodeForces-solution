#include<stdio.h>
#include<string.h>
main()
{
	int i=0,j=0,x,y,z;
	
	char guest[102],host[102],pile[102];
	scanf("%s%s%s",guest,host,pile);
	x=strlen(guest);
	y=strlen(host);
	z=strlen(pile);
	for(i=0;guest[i]!='\0';i++)
	{
		for(j=0;pile[j]!='\0';j++)
		{
			if(guest[i]==pile[j])
			{
				guest[i]='0';
				pile[j]='0';
			}
		}
	}
	
	for(i=0;host[i]!='\0';i++)
	{
		for(j=0;pile[j]!='\0';j++)
		{
			if(host[i]==pile[j])
			{
				host[i]='0';
				pile[j]='0';
			}
		}
	}

	for(i=0;guest[i]!='\0';i++)
	{
		if(guest[i]!='0')
		{
			printf("NO\n");
			return 0;
		}
	}
    
	for(i=0;host[i]!='\0';i++)
	{
		if(host[i]!='0')
		{
			printf("NO\n");
			return 0;
		}
	}
	
	for(i=0;pile[i]!='\0';i++)
	{
		if(pile[i]!='0')
		{
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
	
		
				
}