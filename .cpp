#include<stdio.h>
#include<math.h>
main()
{
    int t,k=0;
    long long int n,x,i,count=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld",&n);
        if(n%2!=0 && n>4)
        {
            x=sqrt(n);
            for(i=3;i<=x;i++)
            {
                if(n%i==0)
                {
                    count++;
                }
            }
            if(count==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(n==4)
        {
            printf("YES\n");
        }
        else
        {
        	printf("NO\n");
        }
    
    }
    return 0;
}