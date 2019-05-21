#include<stdio.h>
#include<string.h>
void rev(char *p);
int main()
{
  int j;
  char a[20]="helloo world";
  for(j=0;p[j];j++);
  printf("before reverse*********** %s\n",a);
  rev(a);
  printf("after reverse*********** %s\n",a);
}


void rev(char *p)
{
  int i,j;
  for(j=0;p[j];j++);
  j--;
  char l;
  for(i=0;i<j;i++,j--)
  {
    l=p[i];
    p[i]=p[j];
    p[j]=l;
  }
}
