//reverse the particular word ina sentence

#include<stdio.h>
#include<string.h>

int main()
{
int i,j,l,m,t,k=0;
char temp;
//	char a[100]="teja hi hello teja teja 123";
	char a[100];
	char b[20],c[20];
	printf("enter the sentence...\n");
	scanf("\n%[^\n]%*c",a);
	m=strlen(a);
	printf("enter the word to reverse:\n");
	scanf("%s",c);
	printf("before::%s\n",a);
	for(i=0;i<=m;i++,k++)
	{
		b[k]=a[i];
		if(a[i]==' '|| a[i]=='\0')
		{
		b[k]='\0';
		if(strcmp(b,c)==0)
		{
			l=strlen(b);
			t=l;
			l--;
			for(j=0;j<l;j++,l--)
			{
				temp=b[j];
				b[j]=b[l];
				b[l]=temp;
			}
			t=i-t;
			for(j=0;b[j];j++,t++)
			a[t]=b[j];
		}

		k=-1;
		}


	}
	printf("after::%s\n",a);

}
