#include<stdio.h>
main()
{
	int n,i,max,min,count=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		if(i>0)
		{
			scanf("%d",&ar[i]);
			if(ar[i]>max)
			{
				max=ar[i];
				count++;
			}
			else if(ar[i]<min)
			{
				min=ar[i];
				count++;
			}
		}
    else
     	{
	    		scanf("%d",&ar[i]);
	   	     max=ar[0];
		        min=ar[0];
   		}
	}
		printf("%d\n",count);
		return 0;
}
		
		