//analysing of waitpid()

#include"header.h"
int main()
{
	if(fork()==0)
	{
	printf("in child pid=%d\n",getpid());
	sleep(10);
//	while(1);
	}
	else
	{
	int r,s;
	printf("in parent5 before wait......\n");
	r=waitpid(-1,&s,WUNTRACED);
	printf("in parent after wait r=%d  s=%d\n",r,s);
	if(WIFEXITED(s))
	printf("normal %d\n",WEXITSTATUS(s));
	else if(WIFSIGNALED(s))
	printf("signal....%d\n",WTERMSIG(s));
	else if(WIFSTOPPED(s))
	printf("STOPPP.......%d\n",WSTOPSIG(s));
	while(1);
	
	}

}
