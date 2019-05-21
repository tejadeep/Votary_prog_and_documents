//m*n


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n,i,j,k,h,l,sum,s=1,t=0;
	int **p;
	printf("enter the matrix\n");
	scanf("%d %d",&m,&n);
	h=m,l=n;
	if((h%3!=0)||(l%3!=0))
	{
	while(h%3!=0)
	h++;
	while(l%3!=0)
	l++;	
	}

		p=malloc(h*sizeof(int *));
		for(i=0;i<h;i++)
			p[i]=malloc(n*sizeof(int));

		for(i=0;i<h;i++)
			for(j=0;j<l;j++)
				p[i][j]=1;
	
	printf("enter the values\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&p[i][j]);
	
	for(i=0;i<h;i++)
	{
	t++;
		for(j=0;j<l;j++)
		{
			if(j%3==0)
			printf(" ");
			printf("%d  ",p[i][j]);
		}
	if(t==3)
	{
	printf("\n");
	t=0;
	}
		printf("\n");

	}


	
n=1;
sum=0;
k=0;
	for(i=0;i<h;)
	{
	

		for(i=0;i<h;i++)
		{
	
		if(i==(3*s))
		{
		
		printf("********* result===  %d	\n",sum);
		sum=0;
		s++;
		}
		printf("%d\n",i);
		for(j=k;j<l;j++)
		{
		if(j>=(3*n))
		{

		break;
		}
		sum=sum+p[i][j];
		}
		printf("sum=%d.........\n",sum);
		}

	printf("*******out side result====      %d\n",sum);
	k=(3*n);
	
	n++;
//	s++;
	sum=0;
	printf("sum====%d\n",sum);
	if(i==h && j!=l)
	{
	i=0;
	s=1;
	}
	
	if(i==(h) && j==(l))
	break;

	}

}
