#include"header.h"
int main()
{
	char ch[20],a[20];
	int fd,fd1;
	fd=open("f1",O_WRONLY);
	fd1=open("f1",O_RDONLY);
	printf("before in sending side....\n");
	printf("enter the data.........\n");
	scanf("%s",ch);
	write(fd,ch,strlen(ch)+1);
	sleep(1);
	read(fd1,a,sizeof(a));
	printf("upper case::%s\n",a);
	
}
