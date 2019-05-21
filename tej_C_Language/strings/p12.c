//convert first letter and last letter upper in a particular sentence
#include<stdio.h>
int main()
{
	int i;
	char a[50]="hello how are gooooooood maoooootng";
	printf("before:::: %s\n",a);
	a[0]=a[0]^32;
		
	for(i=0;a[i];i++)
	{

	if(a[i]==' ')
	{
	a[i-1]=a[i-1]^32;
	a[i+1]=a[i+1]^32;
	}
	}
	a[i-1]=a[i-1]^32;
	
	printf("after:::%s\n",a);
}
