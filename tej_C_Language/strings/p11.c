// write program to reverse a words in given string
// input: hello evry one how
//output: how one evry hello
#include<stdio.h>

void rev_let(char *,int ,int );
void rev_word(char *b,int ,int );
int main()
{
	int i;
	char a[30]="hello evry one how";
	printf("%s\n",a);
	for(i=0;a[i];i++);
	i--;
	rev_let(a,0,i);
//	printf("%s\n",a);
	rev_word(a,0,i);
	printf("%s\n",a);
	
}

void rev_word(char *b,int str,int end)
{
	int w_str,w_end;
	w_str=w_end=str;
	for(;w_end<end ;w_end++)
	{
		w_str=w_end;
		if(b[w_end]==' ')
		continue;
		for(;w_end<=end;w_end++)
		{
		if(b[w_end]==' ')
		break;
		}
		w_end--;
		rev_let(b,w_str,w_end);
	}	
	
}

void rev_let(char *b,int str,int end)
{
	char ch;
	for(;str<end;str++,end--)
	{
	ch=b[str];
	b[str]=b[end];
	b[end]=ch;
	}

}
