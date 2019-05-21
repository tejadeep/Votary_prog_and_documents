#include"header.h"
int main()
{
	int fd,fd1;
	char s[20];
	fd=open("f1",O_WRONLY);
	fd1=open("f2",O_RDONLY);
	printf("enter the dataaaa\n");
	scanf("%s",s);
	
	write(fd,s,strlen(s)+1);
	
	read(fd1,s,sizeof(s));
	printf("received data from buffer_2 *** %s\n",s);
}
