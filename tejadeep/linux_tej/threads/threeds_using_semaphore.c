#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
sem_t tej;
void* thread(void* arg)
{
	sem_wait(&tej);
	printf("entered....\n");
	sleep(2);
	printf("just exiting......\n");
	sem_post(&tej);
}
int main()
{
	while(1)
	{
	sem_init(&tej,0,1);
	pthread_t t1,t2;
	pthread_create(&t1,NULL,thread,NULL);
	pthread_create(&t2,NULL,thread,NULL);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	}
	sem_destroy(&tej);
}
