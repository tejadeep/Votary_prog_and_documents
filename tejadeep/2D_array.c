#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **ptr,k,p;
	ptr=malloc(6*sizeof(int));
	for(k=0;k<6;k++)
		ptr[k]=(int *)malloc(2*sizeof(int));

	printf("enter the values for 2D array:\n");
	for(p=0;p<6;p++)
		for(k=0;k<2;k++)
			scanf("%d",&ptr[p][k]);

	for(p=0;p<6;p++)
	{
		for(k=0;k<2;k++)
			printf("%d ",ptr[p][k]);
		printf("\n");
	}
	return 0;
}
