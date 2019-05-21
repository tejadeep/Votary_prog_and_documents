#include<stdio.h>
#include<string.h>
int main()
{
	int i,l1,l2,j;
	char a[20],b[20];
	printf("enter the two anagram strings\n");
	scanf("%s  %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
	{
	printf("both strings are NOT anagram\n");
	return 1;
	}
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		{
		if(a[i]==b[j])
		{
		l1--;
		break;
		}
		}
	}
	if(l1==0)
	printf("both the strings are anagram\n");
	else
	printf("both the strings are NOT anagram\n");
}
