#include"header.h"
int main()
{
  char ch;
  struct sembuf t;
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

   t.sem_num=3;
   t.sem_op=0;
   t.sem_flg=0;

   printf("before.....\n");
   semop(id,&t,1);
   semctl(id,3,SETVAL,1);
   printf("after....\n");
   for(ch='a';ch<='z';ch++)
   {
//     printf("hii ");
     write(fd,&ch,1);
     sleep(1);

   }
   semctl(id,3,SETVAL,0);
   printf("\n DONE\n");
}


