#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct vot
{
	int num;
	struct vot *next;
};
typedef struct vot SL;

void add_beg(SL **);
void display(SL *);
void reverse(SL **);
int count(SL *l);
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
	reverse(&hptr);
	printf("after : ");
	display(hptr);
	return 0;
}
void reverse(SL **ptr)
{

	int c,i,n,k=0,l,x,t,m=1;
	printf("enter the reverse parameter......\n");
	scanf("%d",&n);
	x=n;
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

//	b[0]->next=b[n-1]->next;
	*ptr=b[n-1];
	for(l=0;l<c;)
	{
		b[l]->next=b[x-1]->next;
		t=l;
		printf("////////////////////////////// l=%d\n",l);
		printf("increment\n");	
		
		for(i=l+m;i<x;i++)
		{
		printf("enteringggggggggggg\n");
		b[i]->next=b[i-1];	
		l++;		
		}
		
		x=n+x-1;
		display(*ptr);
		printf("\n");
		if(x>c)
		{
		printf("something went wrong.......\n");
		return;
		}
		b[l]=b[t];
	m=m+1;
	}

}

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



