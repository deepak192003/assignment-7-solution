// Write a program to check whether two given numbers are co-prime
// numbers or not
#include<stdio.h>
int main()
{
    int a,b,i,min,hcf;
     printf("Enter two number two check whether it is co prime or not: ");
     scanf("%d%d",&a,&b);
                    
                         // coprime numbers are those number which have only one common factor like 1
min=(a>b)?a:b;


    for(i=1;i<=min ;i++)
    {
       if(a%i==0 && b%i==0)
       {
         hcf=i;
       }
    }
    if(hcf==1)
    {
        printf("Yes the given numbe is co prime ");

    }
    else
    {
        printf("No the given number is not co prime ");
    }
   
}