#include<stdio.h>
#include<math.h>
main()
{
    int t,k=0;
    long long int n,i, x;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld",&n);
        if(n%2!=0 && n>4)
        {
            x=sqrt(n);
            if(n%x==0 && n%9!=0)
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