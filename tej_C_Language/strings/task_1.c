//insert a  word taken by user in a sentence  after no of words that count should taken by the user

#include<stdio.h>
#include<string.h>
int main()
{
	int l1,l2,k1,i,j;
	char a[50]="hi hello how are you friends";
	printf("before:::: %s\n",a);
	char b[20];
		l1=strlen(a);
	int count,e=0;
	printf("enter a word\n");
	scanf("%s",b);
	printf("enter a count of word\n");	
	scanf("%d",&count);

	for(i=0;i<=l1+1;i++)
	{
	if(a[i]==' ' || a[i]=='\0')
	e++;
		if(e==count)
		{
		l2=strlen(b);
		for(;l2>=0;l2--)
		{
			for(k1=l1;k1>=0;k1--)
			{
				a[k1+1]=a[k1];
				if(i==k1)
				break;
			}
			l1++;
		}
		if(i>0)
		{
		a[i]=' ';
		i++;
		}
		for(j=0;b[j];i++,j++)
		{
			a[i]=b[j];
		}
		a[i]=' ';
		break;
		}
	}
	
	printf("after::::%s\n",a);
}
