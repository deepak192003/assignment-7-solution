// Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int l,u,x,i;
    printf("Enter a number: ");
    scanf("%d",&l);

    for(x=l+1; ;x++)
    {
        for(i=2; ;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
        {
            printf("Next prime numbe is %d",x);
            break;
        }
    }
}