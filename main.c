#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,temp,gcd;

    // Get two numbers from suer
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);

    // Make sure num1 is the smaller number for the loop
    if(num2>num1)
    {
        temp=num2;
        num2=num1;
        num1=temp;
    }

    // Find GCD bu checking common divisors up to the smaller number
    for(i=1;i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD:%d",gcd);
    return 0;
}
