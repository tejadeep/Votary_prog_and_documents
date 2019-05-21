//write a program to find the current action of given signal number

#include"header.h"
int main()
{
	int num;
	void (*p)(int);
	signal(2,SIG_IGN);
	printf("enter the number...\n");
	scanf("%d",&num);
	p=signal(num,SIG_IGN);
	if(p==SIG_DFL) // signal default
	printf("DFL......\n");
	else if(p==SIG_IGN)
	printf("IGN....\n");
	else
	printf("my_isr......\n");
}
