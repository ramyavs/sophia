#include<stdio.h>
int main()
{
	int a,b,c,d,sub, m,m1,t,t1,r,r1;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	m=a*60;
	m1=c*60;
	t=m+b;
	t1=m1+d;
	sub=t-t1;
	r=sub/60;
	printf("%d",r);
	r1=sub%60;
	if(r1==0)
	{
	printf("0");
	}
	return 0;
}

	
