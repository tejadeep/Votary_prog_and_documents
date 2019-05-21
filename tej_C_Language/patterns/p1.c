#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the number.......\n");
	scanf("%d",&n);

	for(j=n;j>=0;j--)
	{	
	for(i=0;i<2*n-1;i++)
	{
	
	printf("%c ",'A'+i);	
	}
	printf("\n");
	}
	
	
	
}	
