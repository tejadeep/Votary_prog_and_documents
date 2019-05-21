//WAP the given string is palindrome or not

#include<stdio.h>
int main()
{
	int i,j;
	char a[20];
	printf("enter the string////\n");
	scanf("%s",a);
	for(j=0;a[j];j++);
	j--;
	for(i=0;i<=j;i++,j--)
	{
	if(a[i]!=a[j])
	break;		
	
	}
	if(i>j)
	printf("palindrome,,,,,,,,,\n");
	else
	printf("not palindrome......\n");
	
	
	
}
