#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,res=0,res2=0;
    int i,a,k,rem,c=0;
    scanf("%d",&n);
    for(i=pow(10,n-1);i<pow(10,n);i++)
    {
//	printf("%d\n",i);
        k=i;
	a=i;
        while(k)
        {
            k=k/10;
            c++;
        }
        for(;a;a=a/10)
        {
            rem=a%10;
            res=res+pow(rem,c);
            
        }
        if(i==res)
        res2=res2+res;
        c=0;
        res=0;
        
    }
    printf("%d\n",res2);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

