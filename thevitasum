#include<stdio.h>
 long int fact( int x)
   {
     long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }

int main()
{
   int n,c,r,i,ncr,sum=0;
    scanf("%d%d",&n,&r);
   for(i=0;i<=r;i=i+2)
   {
       
           ncr= fact(n)/(fact(i)*fact(n-i));
           sum=sum+ncr;
       
   }
   printf("%d",sum);
   
   return 0;
}
