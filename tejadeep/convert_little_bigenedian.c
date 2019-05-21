#include<stdio.h>
int main()
{
	int num,pos,k,c=0;
	char ch;
	printf("enter the number.....\n");
	scanf("%d",&num);
	printf("number=%d\n",num);
	pos=sizeof(num)*8-1;
	printf("little endian:::\n");
	for(;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		c++;
		if(c%8==0)
		printf(" ");
	}
	printf("\n");
	ch=num;
	k=sizeof(int);
	c=1;
	printf("big enedian,,,,,,\n");
	while(k>0)
	{
		pos=sizeof(ch)*8-1;
		for( ;pos>=0;pos--)
		{
		printf("%d",ch>>pos&1);
		}
		printf(" ");
		ch=num>>(8*c);
		k--;
		c++;
	}
}
