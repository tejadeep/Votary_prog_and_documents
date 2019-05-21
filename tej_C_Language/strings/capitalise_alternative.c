#include<stdio.h>
int main()
{
int i,c=0;
char a[]="helloewydg howdewqd aredwqe you";
printf("%s\n",a);
	for(i=0;a[i];i++)
	{
	if(a[i]==' ')
	continue;
	if(c%2==0)
	a[i]=a[i]^32;
	
	c++;
	}
printf("%s\n",a);
}
