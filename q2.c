// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n,i,n1=0,n2=1,n3;

    printf("Enter a number to find first n terms of fibonacci series: ");
    scanf("%d",&n);
    printf("%d\n%d",n1,n2);
    for(i=3;i<=n;i++)
    {
       
            n3=n1+n2;
printf("\n%d",n3);
            n1=n2;
           
            n2=n3;
            
    }
return 0;
}