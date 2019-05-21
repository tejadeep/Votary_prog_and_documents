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
void sort(SL *);
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
	printf("\n");
	sort(hptr);
	printf("after : ");
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
void sort(SL *ptr)
{
	SL *i;

	int temp,tej;
	do
	{
	tej=0;
	i=ptr;
	while(i->next)
	{
		if(i->num > i->next->num)
		{
		temp=i->num;
		i->num=i->next->num;
		i->next->num=temp;
		tej=1;
		}
	i=i->next;
	}
	}while(tej);

printf("done\n");
}	
	

void display(SL *p)
{
	while(p)
	{
	printf("%d ",p->num);
	p=p->next;
	}
}



