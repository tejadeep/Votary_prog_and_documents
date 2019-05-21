//analysing wait and exit status

#include"header.h"
int main()
{
	
	
	if(fork()==0)
	{
	printf("in c pid=%d\n",getpid());
	sleep(10);
	printf("in c after sleep....\n ");
	exit(1);
	
	}
	else
	{
	int r,s;
	printf("in p before wait....\n");
	r=wait(&s);
	printf("in p after wait r=%d  s=%d\n",r,s);
	while(1);
	}
	


}
