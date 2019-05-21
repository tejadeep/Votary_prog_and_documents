#include<stdio.h>
int main()
{
int i,j,l=0;
int a[1000];
for(i=2;i<10000;i++)
{
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	break;
	}
	if(i==j)
	{
	a[l]=i;
	l++;
	}
}
}
