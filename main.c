#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int n;
   scanf("%d",&n);
   if(n>=1 && n<=pow(10,4))
   {
       int i,a[n],b[n];
       for(i=0;i<n;i++)
       {
           scanf("%d%d",&a[i],&b[i]);
       }
       for(i=0;i<n;i++)
       {
           if(a[i]==b[i]){printf("0\n");}
           if(a[i]<b[i])
           {
                if((b[i]-a[i])==1){printf("1");}
                else if((b[i]-a[i])/2!=0){printf("1\n");}
                else if((b[i]-a[i])/2==0){printf("2\n");}
           }
           if(a[i]>b[i])
           {
                if((a[i]-b[i])==2){printf("1\n");}
                else if((a[i]-b[i])/2!=0){printf("2\n");}
                else if((a[i]-b[i])/2==0){printf("1\n");}
           }
       }
   }
   return 0;
}
