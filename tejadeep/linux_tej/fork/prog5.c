//program on creat three child ona parent .....each each child gerates random dealy 1-10 sec one child after one parent sholud wait for all three child termination so that none of child should become orphan or zombie
#include"header.h"
int main()
{
int r;
	if(fork()==0)
	{
	srand(getpid());
	r=rand()%10+1;// to get random numbers
	printf("in child_1 r=%d\n",r);
	sleep(r);
	printf("child_1 is done...\n");
	
	
	}
	else
	{
	wait(0);
	if(fork()==0)
	{
	srand(getpid());
	r=rand()%10+1;
	printf("in child_2 r=%d\n",r);
	sleep(r);
	printf("child_2 is done.....\n");
	}
	else
	{
	wait(0);
		if(fork()==0)
		{
		srand(getpid());
		r=rand()%10+1;
		printf("in child_3 r=%d\n",r);
		sleep(r);
		printf("in child_3 is done......\n");		
		}
		else
		{
		wait(0);
//		while(wait(0)!=-1);		
		printf(" in parent.........\n");
		printf("********** done *******\n");
		while(1);
		}
	}
	}
}
