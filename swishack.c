#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,p,fsum=0;
   scanf("%d%d",&x,&p);
   p=100-p;
   while(x>0)
   {
       fsum=fsum+x;
       x=(p*x)/100;
   }
   printf("%d",fsum);
   return 0;
} 

