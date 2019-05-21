#include"header.h"
void my_isr(int n)
{
printf("in ISR .....n=%d\n",n);
}

int main()
{
	printf("hellloooooooo\n");
	signal(SIGALRM,my_isr);
	alarm(10);
	printf("tejjjjj\n");
	while(1);
}
