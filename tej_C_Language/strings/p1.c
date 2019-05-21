// copy one string to other string

#include<stdio.h>
int main()
{
	int i;
	char a[]="tejadeep",b[20];

	for(i=0;a[i];i++)
	{
	b[i]=a[i];
	}
	b[i]='\0';
	printf("%s   %s\n",a,b);	
}
