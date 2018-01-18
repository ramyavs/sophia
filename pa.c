#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%d",&c);
if((c>='a' && c<='z' )||(C>='A' && C<='Z'))
{
if(c=='a' || c=='A' || C=='e' || c=='E' || C=='i'||c=='I'|| C=='o'||c=='O'||C=='u'||c=='U')
printf("the character is vowel");
else
printf("the character is consonent");
}
else
printf("the character is neither vowel nor a consonent");
return 0;
}
