#include"header.h"
int main()
{
	char a[20];
	int fd,fd1,i;
	fd=open("f1",O_RDONLY);
	fd1=open("f1",O_WRONLY);
	printf("beforeeeeeeeeee\n");
	
		read(fd,a,sizeof(a));
		printf("data =%s\n",a);
		
		for(i=0;a[i];i++)
		{
		a[i]=a[i]-32;
		
		}
		write(fd1,a,strlen(a)+1);
}
