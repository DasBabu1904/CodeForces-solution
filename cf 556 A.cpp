#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int n;
	scanf("%d",&n);
	
	char ar[n+1];
	getchar();
	scanf("%s",ar);
	int count0=0;
	int count1=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(ar[i]=='0')
		count0++;
    	else if(ar[i]=='1')
		count1++;
	}
	if(count1>=count0)
	printf("%d\n",count1-count0);
	else
	printf("%d\n",count0-count1);
	
	return 0;
}
		