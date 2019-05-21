#include<stdio.h>
main()
{
int i;
int num=10,sum=1;
int rem,res=0;
for(i=0;num;num=num-1)
{
sum=sum*num;

}
printf("%d\n",sum);
for(i=0;sum;sum=sum/10)
{
rem=sum%10;
res=res+rem;
}
printf("%d\n",res);
}
