#include<stdio.h>
int main()
{
  int num,temp,j,i,k,p;
  printf("enter the numebr..\n");
  scanf("%d",&num);
  printf("\n");
  temp=num*2-1;

  for(i=0;i<num;i++)
  {
    for(k=0;k<i;k++)
      printf("%d ",num-k);
    for(j=i;j<temp;j++)
    {
      if(j<temp-i)
        printf("%d ",num-i);
      else
        printf("%d ",num-(temp-j)+1);
    }
      printf("\n");
   }
    
  for(i=1;i<=num-1;i++)
  {
    for(k=0,p=0;k<num-(i+1);k++,p++)
      printf("%d ",num-k);
    for(j=0;j<temp;j++,p++)
    {
     if(j<2*i+1)
      printf("%d ",num-(num-(i+1)));
      else
      printf("%d ",num-(temp-p)+1);
     if(p==temp-1)
      break;
    }
       printf("\n");
   }
}

