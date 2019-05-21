#include<stdio.h>
#include<unistd.h>
int main()
{

if(fork()==0)
{
printf("child ID=%d &&&& child parent ID=%d\n",getpid(),getppid());
printf("hiiiiii\n");
}
else
{
printf("in parent\n");
printf("parent ID=%d &&& parent parent ID=%d\n",getpid(),getppid());
}
//while(1);
}
