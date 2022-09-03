// Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3,i,num;

printf("Enter a number to check between that number: ");
scanf("%d",&num);

    printf("Enter a numbre to check whether this number in the fibonacci series or not: ");
    scanf("%d",&n);

    if(n==n1 || n==n2)
    {
        printf("Yes the given number is of the Fibonacci series-----");
return 0;
    }

    for ( i = 3; i <= num; i++)
    {
       n3=n1+n2;
       n1=n2;
       n2=n3;
    }
     if(n==n3)
       {
            printf("Yes the given number is in the fibonacci series-----");
            
       }
       else
       {
        printf("No the given number is not in the fibonacci serires------");
        
       }
    return 0;
}