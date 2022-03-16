#include<stdio.h>
main()
    {
    int n;
    int x=0,i,j;
    scanf("%d",&n);
    getchar();
    if(n>=1 && n<=150)
        {

        char ar[2] ;
        for(i=0;i<n;i++)
            {
            scanf("%s",ar);
            getchar();
                if((ar[0]=='+' || ar[0]=='x' ||ar[0]=='X')     && (ar[1]=='+') && (ar[2]=='X'||ar[2]=='+'||ar[2]=='x')){x++;}
                if( (ar[0]=='-' || ar[0]=='x' ||ar[0]=='X')     && (ar[1]=='-') && (ar[2]=='X'||ar[2]=='-'||ar[2]=='x')) {x--;}
            }
        }
     printf("%d",x);
     return 0;
    }
