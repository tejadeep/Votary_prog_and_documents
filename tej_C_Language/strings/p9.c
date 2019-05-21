//WAP to count lower char, upper char, digits, special char in a particular string

#include<stdio.h>
int main()
{
	int i;
	 int a[4]={0};
	char b[30];
	printf("enter the sentence\n");
	gets(b);
	for(i=0;b[i];i++)
	{	
		if(b[i]==' ')
		continue;
		if(b[i]>='a' && b[i]<='z')
		{
		a[0]++;
		}
		else if(b[i]>='A' && b[i]<='Z')
		{
		a[1]++;
		printf("****************** %d\n",a[1]);
		}
		else if(b[i]>='1' && b[i]<='9')
		{
		a[2]++;
		}
		else
		a[3]++;
	
	}
	for(i=0;i<4;i++)	
	{
	if(i==0)
	printf("%d times small\n ",a[i]);
	else if(i==1)
	printf("%d times capital\n ",a[i]);
	else if(i==2)
	printf("%d times digits\n ",a[i]);
	else
	printf("%d times other chars\n ",a[i]);
	}
	
	

}
