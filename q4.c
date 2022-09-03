
// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,min,hcf=1;

    printf("Enter two number to find its hcf: ");
    scanf("%d%d",&a,&b);

    min=(a<b)?a:b;

    for(i=1;i<=min;i++)
    {
         if(a%i==0 && b%i==0)
        hcf=i;
    }
    
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}
    
