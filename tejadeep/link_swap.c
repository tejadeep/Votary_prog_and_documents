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
void swapp(SL **);
int main()
{
	SL *hptr=0;
	char ch;
/*	do
	{
		add_beg(&hptr);
		printf("want more Y/N \n");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');
*/	printf("before: ");
	display(hptr);
	printf("\n");
	swapp(&hptr);
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
void swapp(SL **ptr)
{
	if(*ptr==0)
	{
	printf("no nodes are there.......\n");
	exit(0);
	}
	SL *last;
	SL *first=*ptr;
	last=*ptr;
	if(last->next==0)
	return;
	
	while(last->next)
	{
		if(last->next->next==0)
			break;
		last=last->next;
	}
//	printf("%d\n",last->num);
	if(last->next==first->next)
	{
	//	printf("hiii\n");
		last->next->next=first;
		*ptr=first->next;
		first->next=0;
		return;
	}
	*ptr=last->next;
	last->next->next=first->next;
	first->next=0;
	last->next=first;
}

void display(SL *p)
{
	while(p)
	{
	printf("%d ",p->num);
	p=p->next;
	}
}



