#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
if((a>b && a<c)||(a<b  && a>c))
{
printf("%d is second largest number",a);
}
else if((b<a && b>c)||(b>a &&  b<c))
{
printf("%d is second largest number",b);
}
else if((c>a && c<b)||(c>a  && c>b))
{
printf("%d is second largest number",c);
}
else
{
printf("it is a default");
}
 return 0;
}


