/**
This program is used to calculate the value of the following series:

1 + (1/2) + (1/3) + (1/4) + ..... + (1/n)

**/
#include<stdio.h>

int main()
{
    int n=0,i=0;
    float sum=0;

    printf("Enter a number till N you want series:\n\n");
    scanf("%d",&n);

    printf("\n\nThe given series is:\n\n");

    for(i=1;i<=n;i++)
    {
        printf(" (1/%d) ",i);
        if(i!=n)
        {
            printf("+");
        }

        sum=sum+(1.0/i);
    }
    printf("\n\n");


    printf("The value of the series is %d is sum is %f\n\n",n,sum);

    return 0;
}
