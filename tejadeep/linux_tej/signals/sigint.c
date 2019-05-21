#include"header.h"

void tejhandler()
{
  printf("************** in sigal handler *****\n");

}

int main()
{
  printf("********* in main *******\n");
  signal(SIGINT,tejhandler);
  printf("operatioon done***\n");
  while(1);
}
