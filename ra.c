#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%d",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("the character is aplhabet");
else
printf("the character is not an alphabet");
return 0;
}
