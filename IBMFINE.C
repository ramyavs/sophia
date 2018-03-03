#include<stdio.h>
int main()
{
int a=0,license=1,insurance=0,rcbook=0,helmet=1,speed=1,samevehicle=0;
scanf("%d",&a);
if(a==0)
{
if(license==0)
{
	printf("paid fine for license %d\n",a+1000);
}
else
{
	printf("no need of paid fine\n");
}
if(insurance==0)
{
	printf("paid fine for insurence %d \n",a+500);
}
else
{
	printf("no need of paid fine\n");
}
if(rcbook==0)
{
	printf("paid fine for rc book %d\n",a+700);
}
else
{
	printf("no need of paid fine\n");
}
if(helmet==0)
{
	printf("paid fine for helmet %d\n",a+400);
}
else
{
	printf("no need of paids fine\n");
}
if(speed==0)
{
	printf("paid fine for high spped %d\n",a+350);
}
else
{
	printf("no need of paid fine\n");
}if(samevehicle==0)
{
	printf("paid fine for two persons traveelled in same vehicle %d\n",a+300);
}
else
{
	printf("no need of paid fine\n");
}
}
if(a==1)
{
	printf("congrats for follow the all the rules");
}
return 0;
}




