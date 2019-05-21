//insert an element in a string

#include<stdio.h>
int main()
{
	int i;
	char a[10]="TEJADEEP";
	printf("%s\n",a);
	for(i=0;a[i];i++);
	for(;i>=0;i--)
	{
	a[i]=a[i-1];
	if(a[i]==a[3])
	{
	a[i]='R';	
	break;
	}
	}
	printf("%s\n",a);
	
}
