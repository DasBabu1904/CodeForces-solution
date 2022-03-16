#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	getchar();
	
	char state[n+1],pass[n+1];
	scanf("%s%s",state,pass);
	int i=0;
	int move=0;
	int x=0;
	for(i=0;i<n;i++)
	{
		if(state[i]>pass[i])
		{
			if(state[i]-pass[i]>=10+pass[i]-state[i])
			{x=10+pass[i]-state[i];}
			else
			{x=state[i]-pass[i];}
		}
		else
		{
			if(pass[i]-state[i]>=10+state[i]-pass[i])
			{x=10+state[i]-pass[i];}
			else
			{x=pass[i]-state[i];}
		}
		move=move+x;
	}
	
	printf("%d\n",move);
	return 0;
}