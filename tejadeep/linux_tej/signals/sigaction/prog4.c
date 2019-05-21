//settting another value to 
#include"header.h"
void my_isr(int n)
{
	printf("in isr.......n=%d  PID=%d\n",n,getpid());
	
}
int main()
{
	if(fork()==0)
	{	
	printf("in c pid=%d\n",getpid());
	while(1);
	}	
	else
	{
	struct sigaction v;
	v.sa_handler=my_isr;
	sigemptyset(&v.sa_mask);
	v.sa_flags=SA_NOCLDSTOP;
	sigaction(SIGCHLD,&v,0);
	printf("in parent PID=%d\n",getpid());
	while(1);
	}
	
}	
