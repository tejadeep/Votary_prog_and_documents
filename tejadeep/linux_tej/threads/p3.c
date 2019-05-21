//analysing communication of 2 threads

#include"header.h"
void* thread_1(void *p)
{
printf("hhhh\n");
	char s[20];
	int fd;
	fd=open("f1",O_WRONLY);
	while(1)
	{
	scanf("%s",s);
	write(fd,s,strlen(s)+1);
	}
}

void* thread_2(void *p)
{
	char s[20];
	int fd;
	fd=open("f1",O_RDONLY);
	while(1)
	{
	read(fd,s,sizeof(s));
	printf("%s\n",s);
	
	}
	
	
}
int main()
{
	pthread_t t1,t2;
	mkfifo("f1",0664);
	printf("enetttttttt\n");
	pthread_create(&t1,0,thread_1,0);
	pthread_create(&t2,0,thread_2,0);
	pthread_exit(0);

}
