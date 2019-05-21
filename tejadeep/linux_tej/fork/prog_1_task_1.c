//analysing 1 parent to 3 child

#include"header.h"
void my_isr(int n)
{
	
	if(n==2)
	printf("parent is terminated because of child_1\n");
	else if(n==3)
	printf("parent is terminated because of child_2\n");
	else if(n)
	printf("parent is terminated because of child_3\n");
	
}
int main()
{
	char c;
	int r,s;
	int a[3];
	if((a[0]=fork())==0)
	{
	sleep(1);
	printf("PID of child_1 is.....%d\n",getpid());
	printf("parent of child_1 is.....%d\n\n",getppid());
	signal(SIGQUIT,my_isr);
	while(1);
	}
	else
	{
	printf("*** PID of parent is.....%d ***\n\n",getpid());
		if((a[1]=fork())==0)
		{
		printf("PID of child_2 is.....%d\n",getpid());
		printf("parent of child_2 is.....%d\n\n",getppid());
		signal(SIGINT,my_isr);
		while(1);
		}
		else
		{
			if((a[2]=fork())==0)
			{
			printf("PID of child_3 is.....%d\n",getpid());
			printf("parent of child_3 is.....%d\n\n",getppid());
		//	signal(
			while(1);
			}
			else
			{
				while(1);
		//	int r,s;
		//		r=waitpid(-1,&s,WUNTRACED);
		//		printf("in parent after wait r=%d   s=%d\n",r,s);
		//		if(WIFEXITED(s))
		//		printf("normal %d\n",WEXITSTATUS(s));
		//		else if(WIFSIGNALED(s))
		//		printf("signal  %d\n",WTERMSIG(s));
	
			}
		}
		
	}

}
