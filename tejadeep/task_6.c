//find the substring using stack

#include<stdio.h>
#include<string.h>
#define max 20
static int top=-1;
char a[max];
char pop();
void push(char c);
struct tej
{
	char a[30];
	char sub[10];

};
typedef struct tej TL;
int main()
{
	TL t;
	int i,j=0;
	char c;
	printf("enter the string......\n");
	scanf("%s",t.a);
	i=strlen(t.a);
	i--;
	for(;i>=0;i--)
	{
		push(t.a[i]);
	}
	printf("****** string is pushed char by char successfully ******\n");
	printf("enter the substring.....\n");
	scanf("%s",t.sub);
	for(i=0;t.a[i];i++)
	{
	c=pop();
	if(c==t.sub[0])
	{	printf("hiii\n");			
		for(j=1;t.sub[j];j++)
		{
		c=pop();
		if(t.sub[j]!=c)
		{
		break;
		}
		}
		break;
	}
	}
		if(t.sub[j]=='\0')
		printf("substring is present....\n");
		else
		printf("not present....\n");
	
}
char pop()
{
//	printf("pop entered......\n");
	char res;
	if(top==-1)
	{
		printf("stack under flow,,,,,\n");
		return top;
	}
	res=a[top];
	top--;
//	printf("popped......%c\n",a[top]);
	return res;
}

void push(char c)
{
//	printf("push entered.....\n");
	top++;
	if(top==max)
	{
		printf("stack over flow\n");
		return;
	}
	a[top]=c;
//	printf("pusheddddd......%c\n",c);
}
