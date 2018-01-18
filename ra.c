#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%d",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
   {   
if(c=='a' || c=='A'|| c=='e' || c=='E' || c=='i' || c=='I' || c=='O' || c=='O' || C=='u' || c=='U')
printf("the character is vowel");
else
printf("the character is consonent");
   }
else 
printf("the character is neither vowel or consonent");
return 0;
   }
