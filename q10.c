// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int n,x,rem,sum;

    for(n=1;n<=1000;n++)
    {
        x=n;
       sum=0;
            while (x!=0)
            {
               rem=x%10;
               sum=sum+rem*rem*rem;
               x=x/10;
            }
            if(sum==n)
          printf("%d\t",n);
    }
}