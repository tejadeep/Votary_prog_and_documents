// sort according to the length of line

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*df;
	fp=fopen("tej","r");
	char ch;
	int j,i=0,count=0,c=0;
	while((ch=fgetc(fp))!=-1)
	if(ch=='\n')
	count++;
	rewind(fp);
	int s[count];
	char *p[count],*q;
i=0;
	while((ch=fgetc(fp))!=-1)
	{
	c++;
		
		
		if(ch=='\n')
		{
			s[i]=c;
			p[i]=malloc(c+1);
			i++;
			c=0;
		}
	}
	rewind(fp);
	i=0;
	while(fgets(p[i],s[i]+1,fp))
	i++;
	df=fopen("tej","w");
	for(i=0;i<count-1;i++)
	for(j=0;j<count-1-i;j++)
	if(s[j]>s[j+1])
	{
	c=s[j];
	s[j]=s[j+1];
	s[j+1]=c;
	q=p[j];
	p[j]=p[j+1];
	p[j+1]=q;	
	}
	for(i=0;i<count;i++)
	fputs(p[i],df);
}
