#include"header.h"
void hdl(int sig,siginfo_t *siginfo,void *context)
{
	printf("sending PID:: %ld,UID:%d\n",(long)siginfo->si_pid,(long)siginfo->si_uid);


}
int main(int argc,char *argv[])
{
struct sigaction act;
memset(&act,'\0',sizeof(act));
act.sa_sigaction=&hdl;
act.sa_flags=SA_SIGINFO;
if(sigaction(SIGTERM,&act,NULL)<0)
{
perror("sigaction");
return 1;
}
while(1)
sleep(10);

}
