//find the length of string using a pointer

#include<stdio.h>
int main()
{
	int i;
	char *p="tejadeep",*q;
	q=p;
	printf("%s   %s \n",p,q);
//	for(i=0;p[i];i++);
	for(i=0;*p;i++,p++);
	printf("%d\n",i);	

}
