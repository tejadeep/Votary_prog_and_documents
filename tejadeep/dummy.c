#include<stdio.h>
#include<stdlib.h>
struct vot
{
	int num;
	struct vot *next;
};
typedef struct vot SL;

void add_beg(SL **);
void display(SL *);
//void swapp(SL **);
int main()
{
	SL *hptr=0;
	char ch;
	do
	{
		add_beg(&hptr);
		printf("want more Y/N \n");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');
	printf("before: ");
	display(hptr);
	return 0;
}
void add_beg(SL **ptr)
{
	SL *temp;
	temp=(SL *)malloc(sizeof(SL));
	printf("enter the number\n");
	scanf("%d",&temp->num);
	
	temp->next=*ptr;
	*ptr=temp;
	
}

void display(SL *p)
{
	int c=0;
	while(p)
	{
	printf("%d ",p->num);
	p=p->next;
	c++;
	}
	printf("\n no of nodes are:::::%d\n",c);
}



