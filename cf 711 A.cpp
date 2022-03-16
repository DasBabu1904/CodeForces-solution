#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	char seatplan[n][6];
	int i=0;
	int yes=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",seatplan[i]);
	}
	for(i=0;i<n;i++)
	{
		if(seatplan[i][0]==seatplan[i][1] && seatplan[i][0]=='O' && seatplan[i][1]=='O')
		{
			yes++;
			seatplan[i][0]='+';
			seatplan[i][1]='+';
			break;
		}
		else if(seatplan[i][3]==seatplan[i][4] && seatplan[i][3]=='O' && seatplan[i][4]=='O')
		{
			yes++;
			seatplan[i][3]='+';
			seatplan[i][4]='+';
			break;
		}
	}
	if(yes)
	{
     	printf("YES\n");
     	for(i=0;i<n;i++)
     		{
          		printf("%s\n",seatplan[i]);
         	}
	}
	else
	printf("NO\n");
	return 0;
}
			