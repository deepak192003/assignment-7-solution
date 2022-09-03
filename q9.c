// Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int num,rem,sum=0,originalnum;
    printf("Enter a number to check whether it is armstrong or not: ");
    scanf("%d",&num);
originalnum=num;
    while (originalnum!=0)
    {
        rem=originalnum%10;
        sum=sum+(rem*rem*rem);
        originalnum=originalnum/10;
    }
    if(num==sum)
    {
        printf("Yes the given number is armstrong");

    }
    else
    {
        printf("No the given number is not armstrong");
    }
   
    
    return 0;
}