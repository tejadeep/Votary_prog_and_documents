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
SL* reverse(SL *,int);
int count(SL *l);
int main()
{
int n;
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
	printf("enter the parameter......\n");
	scanf("%d",&n);
	hptr=reverse(hptr,n);
	printf("after : ");
	display(hptr);
	return 0;
}

SL* reverse(SL *ptr,int n)
{
int m=0,i=0;
	SL *next;
	SL *temp=ptr;
while(next!=0)
{
	int c=0;
	SL *prev=0;
	SL *current=ptr;
//	SL *next=0;
while(current!=0 && c < n)
{
temp=current;
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		c++;
}
printf("*********************************************");
display(ptr);
printf("\n");

if(m>1)
temp->next=prev;
m++;
//if(next!=0)
//ptr->next=reverse(next,n);
ptr=next;
}/*
while(i<n)
{
temp=temp->next;
}
ptr=next;
*/
return temp;
}

/*
void reverse(SL **ptr)
{

	int c,i;
	SL **b,*p;
	p=*ptr;
	c=count(*ptr);
	printf("no of nodes are......%d\n",c);
	b=malloc(c*sizeof(SL));
	for(i=0;i<c;i++)
	{
	b[i]=p;
	p=p->next;
	}

	for(i=1;i<c;i++)
	{
	b[i]->next=b[i-1];	
	}
	
	b[0]->next=0;
	*ptr=b[c-1];
	
}
*/
int count(SL *l)
{
	int c=0;
	while(l)
	{
	l=l->next;
	c++;
	}
	return c;
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
	while(p)
	{
	printf("%d ",p->num);
	p=p->next;
	}
}



