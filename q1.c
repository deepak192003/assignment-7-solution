// Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{

    int n1=0,n2=1,n3,i,n;

    printf("Enter which term of fibonacci series you want: ");
    scanf("%d",&n);

   if(n==0 && n==1)
   {
    printf("%d",n);
   }
   
   for(i=3;i<=n;i++)
   {
        n3=n1+n2;
        n1=n2;
        n2=n3;
   }
   printf("%d term of fibonacci series is %d",n,n3);
}