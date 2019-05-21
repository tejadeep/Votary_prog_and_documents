/*
 ~~~~~~~
 ~~~ ~~~
 ~~~~~~~ 
*/

#include<stdio.h>
int main()
{
  int m,i,j,n,k;
  printf("enter the n value.....\n");
  scanf("%d",&n);
  m=n/2;
  for(i=0;i<n;i++)
  {

    if(m==i)
    {
      for(k=0;k<7;k++)
      {
        if(k==7/2)
        printf("* ");
        else
        printf("@ ");
      }
      
      printf("\n");
    }
    else
    {  
      for(k=0;k<7;k++)
      printf("# ");
      printf("\n");
    }
    
  }

}
