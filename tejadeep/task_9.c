

#include<stdio.h>
int main()
{
	int n,i,k,rem,l,c=2,sum=0,j=1;
	int reg=1,flag=0;
	
	int a[10];
	int n1;
	printf("enter the val\n");
	scanf("%d",&n1);
	int a2[n1];
	for(i=0;i<n1;i++)
	{
	scanf("%d",&a2[i]);
	}

	a[0]=1;
	int l1=0,l2=1;
	for(i=0;i<25 ;i++)
	{
		k=l2+l1;
		l=k;
		l1=l2;
		l2=k;

		for(;l;l=l/10)
		{
			rem=l%10;
			sum++;
				
		}
		if(sum!=reg)
		{
		printf("hiiiiii\n");
		a[j]=c;
		reg=sum;
		j++;
		}
		sum=0;
		c++;
	
	}
	for(i=0;i<n1;i++)
	{
	printf("%d\n",a[a2[i]-1]);
	
	}
}
