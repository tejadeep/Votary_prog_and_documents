//program on analysing *** sigaction ***

#include"header.h"
void my_isr(int n)
{
printf("in isr......n=%d\n",n);
}
int main()
{
	struct sigaction v;
	printf("helloo....pid=%d\n",getpid());
	v.sa_handler=my_isr;
	sigemptyset(&v.sa_mask);
	v.sa_flags=0;
	sigaction(SIGINT,&v,0);
	printf("haiiii....\n");
	while(1);
}

