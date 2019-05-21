
#include<stdio.h>
int main()
{

	int i,j,k;
	for(i=0;i<=5;i++)
	{
	for(j=-5;j<=5;j++)
	{
	k=j;
	if(k<0)
	k=-k;
	if(k>=i)
	printf("%c ",'F'-k);
	else
	printf("  ");

	}	
	
	printf("\n");
	}
}
















