#include<stdio.h>
  int main() 
  {
    int i,f,s,n,sum;
    
    f=1;
    s=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("fibonacci series");
    for(i=1;i <= n;++i)
   printf("%d",f);
   {
   sum=f+s;
   f=s;
   s=sum;
  }
  return  0;
  }
  
	
