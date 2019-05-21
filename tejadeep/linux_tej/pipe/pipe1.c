#include"header.h"
int main()
{
	int fd[2];
	char s[10],a[10];
	char buff[10];
	if(pipe(fd)==-1)
	{
		perror("pipe");
		return 0;
	}
	if(fork()==0)
	{
	sleep(1);
		read(fd[0],a,sizeof(a));
	printf("in child out put......%s\n",a);
	}
	else
	{
	
		printf("enter the string in parent.......\n");
		scanf("%s",s);
		write(fd[1],s,strlen(s)+1);
	}
}
