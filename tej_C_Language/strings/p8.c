// program to remove conjucutive spaces in a given sentence

#include<stdio.h>
int main()
{
	int i,j,flag=0;
	char a[40]="how   are  you   friends";
	char b[40];
	for(i=0,j=0;a[i];i++,j++)
	{
		if(a[i]==' ')
		{
			flag=1;
			j--;
			continue;
		}

		if(flag==1)
		{
		b[j]=' ';
		i--;
		flag=0;
		}
		else
		b[j]=a[i];	
	}
	b[j]='\0';
	printf("%s\n",b);

}
