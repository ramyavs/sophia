#include<stdio.h>
int main()
{
	int array[56],size,c,m,l;
	printf("enter the  number ofarray");
	scanf("%d",&size);
	printf("enter %d  intrgers",size);
	for(c=0;c<size;c++)
		scanf("%d",&array[c]);
		m=array[0];
		for(c=0;c<size;c++)
		{
		if(array[c]<m)
		{
		m=array[c];
		l=c+1;
		}
		}
		printf("the minimum value is%d%d",l,m);
		return  0;
}
