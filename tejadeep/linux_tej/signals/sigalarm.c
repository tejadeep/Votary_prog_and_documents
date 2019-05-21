#include"header.h"
 
void ALRMhandler()
{
  printf("in alarm handlerrrrr****\n");
}

int main()
{
  printf("before signal......\n");
  alarm(10);
  signal(SIGALRM,ALRMhandler);
//  printf("after signal .....\n");
  while(1);
}
