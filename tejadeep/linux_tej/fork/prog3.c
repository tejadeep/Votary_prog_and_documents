// analysing wait and exit in deeep
#include"header.h"
int main()
{
	if(fork()==0)
	{
	printf("in child ,,,,,pid=%d\n",getpid());
	sleep(10);
	printf("in chils after sleep......\n");
	exit(1);
	}
	else
	{
	int r,s;
	printf("inparent bafore wait.....\n");
	r=wait(&s);
	printf("in parent after wait r=%d,s=%d\n",r,s);
	if(WIFEXITED(s))
	printf("normal %d\n",WEXITSTATUS(s));
	else if(WIFSIGNALED(s))
	printf("signal......%d\n",WTERMSIG(s));
	while(1);
	}




}
