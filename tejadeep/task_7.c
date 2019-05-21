//reverse the particular string in a file


#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,c=0;
	FILE *fp;
	char a[20],s[20],temp;

	fp=fopen("tej","r+");
	if(fp<0)
	{
	perror("fopen");
	return 0;
	}
	printf("enter the user string......\n");
	scanf("%s",s);

	while(fscanf(fp,"%s",a)!=-1)
	{
		if(strcmp(a,s)==0)
		{
		for(j=0;a[j];j++)
		c++;
		j--;
		for(i=0;i<j;i++,j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		fseek(fp,-c,SEEK_CUR);
		fprintf(fp,"%s",a);
		c=0;
		}
	}

}
