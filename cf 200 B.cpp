#include<stdio.h>
main()
{
	int n,sum=0,i;
	double ans;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	ans=(1.00*sum)/n;
	printf("%.12f\n",ans);
	return 0;
}
	