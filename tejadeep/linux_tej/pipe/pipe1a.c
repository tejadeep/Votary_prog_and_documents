#include"header.h"
int main()
{
	int fd[2],st;
	char s[20],a[20];
	char buff[10];
	if(pipe(fd)==-1)
	{
		perror("pipe");
		return 0;
	}
	if(fork())
	{
//    wait(&st);
	sleep(1);
		read(fd[0],a,sizeof(a));
	printf("in child out put......%s\n",a);
    read(fd[0],a,sizeof(a));
	printf("in child out put second......%s\n",a);
  }
	else
	{
	
		printf("enter the string in parent.......\n");
		scanf("%s",s);
		write(fd[1],s,strlen(s)+1);
     perror("write");
     sleep(1);
    write(fd[1],"teja",5);
     perror("write");
  //   exit(1);
	}
}
