#include"header.h"
void my_isr(int n)
{
wait(0);
printf("in ISR n =%d pid=%d  \n",n,getpid());
}
main()
{
	if(fork()==0)
	{
	printf("in C pid=%d\n",getpid());
	sleep(10);
	printf("in C after sleep...\n");
	}
	else
	{
	signal(SIGCHLD,my_isr);
	printf("in parent PID=%d\n",getpid());
	while(1);
	}
	
	
}
