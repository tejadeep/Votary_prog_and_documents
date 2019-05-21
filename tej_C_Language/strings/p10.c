//program to sort a given string in ascending order

#include<stdio.h>
int main()
{
	int l,j,i;
	char ch,a[20]="tejadeep";
	printf("%s\n",a);
	for(l=0;a[l];l++)
	printf(" %d--> %c\n",a[l],a[l]);
	for(i=0;i<l-1;i++)
	for(j=0;j<l-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		ch=a[j];
		a[j]=a[j+1];
		a[j+1]=ch;
		}

	}
	printf("%s\n",a);
	
	
}
