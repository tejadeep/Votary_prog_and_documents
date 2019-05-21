#include"header.h"
int main()
{
	int fd,fd1,i;
	char a[20];
	fd=open("f1",O_RDONLY);
	fd1=open("f2",O_WRONLY);
	read(fd,a,sizeof(a));
	printf("received data from buffer_1***** %s\n",a);
	
	for(i=0;a[i];i++)
	a[i]=a[i]-32;	
	write(fd1,a,strlen(a)+1);
}
