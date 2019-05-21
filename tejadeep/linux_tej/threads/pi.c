#include"header.h"
int x,i;
static pthread_mutex_t mtx;
void *tej_thread(int *var)
{
  //sleep(10);
  int s;
  printf("**************** %d\n",*var);
  s=pthread_mutex_lock(&mtx);
  for(i=0;i<100000;i++)
  x++;
  printf("x=%d\n",x);
  s=pthread_mutex_unlock(&mtx);
  //while(1);
  printf("in first thread\n");
}

void *tej_thread2(void *var)
{
  int l;
  //sleep(10);
  l=pthread_mutex_lock(&mtx);
  for(i=0;i<100000;i++)
  x++;
  printf("x=%d\n",x);
  l=pthread_mutex_unlock(&mtx);
  printf("in second thread\n");
}

int main()
{
  int a;
  printf("&&&&&&&& %u\n",&a);
  pthread_t tej,tej2;
  printf("before thread.....\n");
  pthread_create(&tej, NULL, tej_thread, &a);
  pthread_create(&tej2, NULL, tej_thread2, NULL);
  //sleep(1);
  pthread_join(tej,NULL);
  pthread_join(tej2,NULL);
  printf("after thread\n");
  return 0;
}
