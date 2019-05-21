#include"header.h"
struct msgbuf
{
long mtype;
char data[10];
};
int main(int argc,char **argv)
{
  struct msgbuf v;
  int id,id1;
  if(argc!=2)
  {
  printf("usage:\n");
  return 0;
  }
  
  id=msgget(5,IPC_CREAT|0664);
//  id1=msgget(9,IPC_CREAT|0664);
  if(id<0)
  {
  perror("msgget");
  return 0;
  }
  
  printf("id=%d\n",id);
  printf("id1=%d\n",id1);
  msgrcv(id,&v,sizeof(v),atoi(argv[1]),0);
  printf("after the dataa=%s\n",v.data);

}


