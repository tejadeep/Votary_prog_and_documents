//input :{5,4,7,1,2,9,8};
//output:{5,4} and {8,1};
//5+4=9 and 8+1=9 


#include<stdio.h>
#include<stdlib.h>
#define max 7
static int top=-1;
int a[max],temp;
void pushh()
{

	printf("enter the value\n");
	scanf("%d",&temp);
	top++;
	if(top==max)
	printf("stack is full\n");
	a[top]=temp;
	printf("stack is pushed\n");
}
void pop()
{
top--;
printf("stack is popped\n");
}

void display()
{
	int i;
	for(i=0;i<=top;i++)
	printf("%d ",a[i]);
}

void set_pair()
{
int i,j,k,num,c=0,l=0,m=0;
	if(top==-1)
	{
	printf("no elements are there\n");
	return;
	}
	if(top==1)
	{
	printf("only one pair is there\n");
	return;
	}
	if(top==0)
	{
	printf("only one element is there\n");
	return;
	}
while(m<=top)
{

for(k=m+1;k<=top;k++)
{
num=a[m]+a[k];
	for(i=m+1;i<=top;i++)
	{
		for(j=i+1;j<=top;j++)
		{
		if(a[m]==a[i] || a[m]==a[j])
		continue;
		if(a[k]==a[i] || a[k]==a[j])
		continue;
		if(num==a[i]+a[j])
		{
		printf("(%d %d) ",a[i],a[j]);
		c++;
		l=1;
		}
		}
		if(l==1)
		{	
		printf("(%d %d)  these two are equal pairs ie., %d\n",a[m],a[k],a[m]+a[k]);
		l=0;
		}
	}
}
m++;
}
	
	if(c==0)
	printf("no pairs are there....\n");
}
int main()
{
int n;
	do
	{
	printf("enter the option\n 1)push 2)pop 3)display 4)set_pair 5)exit\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:pushh();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:set_pair();
	case 5:return 0;
	}

	}while(1);

return 0;
}
