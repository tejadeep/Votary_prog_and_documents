#include"header.h"
sem_t mutex;
void* thread(void* arg)
{

//printf("********************* %d\n",arg);
  sem_wait(&mutex);
  printf("\nEntered....\n");
  sleep(4);
  printf("\njust Exiting...\n");
  sem_post(&mutex);
}

int main()
{
  sem_init(&mutex,0,1);
  pthread_t t1,t2;
  pthread_create(&t1,NULL,thread,0);
 // printf("doneeeeeeeee\n");
 // sleep(2);
  pthread_create(&t2,NULL,thread,NULL);
  pthread_join(t1,NULL);
  printf("doneeeeeeeee\n");
  pthread_join(t2,NULL);
  printf("second time doneeeeeee\n");
  sem_destroy(&mutex);
  return 0;
}
