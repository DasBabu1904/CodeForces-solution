#include<stdio.h>
main()
{
	char ar[101];
	int i=0,h,e,l,o;
	int hn=0,en=0,ln=0,on=0;
	scanf("%s",ar);
	for(i=0;ar[i]!='\0';i++)
	{
	 if(ar[i]=='h')
	 {h=i;
	 hn++;
	   if(hn>0)break;
	 }
	  
	}
   
   for(i=0;ar[i]!='\0';i++)
  { 
    if(ar[i]=='e' && i>h && hn>0)
    {e=i;
    en++;
    if(en>0)break;
    }
  }
  
   for(i=0;ar[i]!='\0';i++)
   {	 
    if(ar[i]=='l' && i>e && en>0)
    {l=i;
    ln++;
    if(ln>1)break;
    }
   }
   
   for(i=0;ar[i]!='\0';i++)
   { 
    if(ar[i]=='o' && i>l && ln>0)
    {o=i;
    on++;
    if(on>0)  break;
    }
   }
   
	if(h<e && e<l && l<o &&hn>0 && en>0&& ln>1 && on>0)
	{
		printf("YES\n");
	}
	else{printf("NO\n");}
	return 0;
}
		