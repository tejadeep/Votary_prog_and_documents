#include"header.h"
int main()
{
  char ch;
  struct sembuf v;
  int id,r,fd;
  fd=open("data",O_WRONLY|O_APPEND|O_CREAT,0664);
  if(fd<0)
  {
  perror("open");
  return 0;

  }
  id=semget(4,5,IPC_CREAT|0664);
  if(id<0)
  {
  perror("semget");
  return 0;
  }

   printf("id=%d\n",id);
   v.sem_num=3;
   v.sem_op=0;
   v.sem_flg=0;
   printf("before....\n");
   semop(id,&v,1);
 //  semctl(id,2,SETVAL,0);
   semctl(id,3,SETVAL,1);
   printf("after......\n");
   for(ch='A';ch<='Z';ch++)
   {
     printf("%c ",ch);
    write(fd,&ch,1);
    sleep(1);
   }
   semctl(id,3,SETVAL,0);
   printf("DOne....\n");

}
