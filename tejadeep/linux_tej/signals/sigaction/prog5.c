#include"header.h"
void my_isr(int n)
{
	printf("in isr......n=%d\n",n);
	sleep(10);
}
int main()
{
struct sigaction v;
printf("heloo.....pid=%d\n",getpid());
v.sa_handler=my_isr;
V.Sa_handler=my_isr2;
sigemptyset(&v.sa_mask);
v.sa_flags=0;
sigaction(SIGINT,&v,0);
printf("haiiiiiiii\n");
while(1);

}

