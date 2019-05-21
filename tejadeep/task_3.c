#include<stdio.h>
#define max 20
static int top=-1;
char a[max];


int compare(char tej1,char tej2);
char pop();
void push(char c);

int main()
{
FILE *fp;
char c,ch;
int flag;
	fp=fopen("tej","r");
	while((c=fgetc(fp))!=EOF)
	{
	printf("%c ",c);
	if(c=='[' || c=='{' || c=='(')
	push(c);
	 if(c=='}'||c==']' || c==')')
	{
	ch=pop();
	flag=compare(ch,c);
	printf("flaaaaaaaaaaaaaag''''''''=%d\n",flag);
	if(flag==0)
	{
	printf("compilation error\n");
	return 0;
	}
	}
	}

if(flag==1)
printf("compilation success......\n");
}

int compare(char tej1,char tej2)
{
if(tej1=='[' && tej2==']')
	return 1;
else if(tej1=='{' && tej2=='}')
	return 1;
else if(tej1=='(' && tej2==')')
	return 1;
else
	return 0;
}

char pop()
{
printf("pop entered......\n");
	char res;
	if(top==-1)
	{
	printf("stack under flow,,,,,\n");
	return top;
	}
	res=a[top];
	top--;
	printf("popped......\n");
	return res;
}

void push(char c)
{
printf("push entered.....\n");
	top++;
	if(top==max)
	{
	printf("stack over flow\n");
	return;
	}
	a[top]=c;
	printf("pusheddddd\n");
}
