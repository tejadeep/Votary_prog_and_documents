//WAP to find a no of times the charater find in given string

#include<stdio.h>
int main()
{
	int i,c=0;
	char a[25],ch;
	printf("enetr a string\n");
	scanf("%s",a);
	printf("%s\n",a);

	printf("enter a charater\n");
	scanf("%s",&ch);

	for(i=0;a[i];i++)
	{
	if(a[i]==ch)
	c++;
	}
	
	printf("%c is present in %d times\n",ch,c);
	



}
