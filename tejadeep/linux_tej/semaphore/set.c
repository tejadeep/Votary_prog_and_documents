#include"header.h"
int main(int argc,char **argv)
{
  int id,r;
  if(argc!=3)
  {
  printf("usage:::::\n");
  return 0;

  }

 id=semget(4,5,IPC_CREAT|0664);
 if(id<0)
 {
  perror("semget");
  return 0;
 }
 printf("id=%d\n",id);
 r=semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));
 if(r<0)
 {
   perror("semctl");
   return 0;
 }
}
