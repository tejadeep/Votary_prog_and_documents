#include"header.h"
int main()
{
int c=0;
int p[2];
char ch='a';
pipe(p);
fcntl(p[1],F_SETFL,O_NONBLOCK);
while(write(p[1],&ch,1)!=-1)
  c++;
printf("%d\n",c);


}
