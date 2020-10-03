/** This program is used to find the simple interest **/
#include<stdio.h>

int main()
{
    float simple_interest=0.0,rate_of_interest=0.0,principal=0.0,years=0.0;
    printf("Enter the principal amount (in Rs) : ");
    scanf("%f",&principal);
    printf("Enter the rate of interest (in p.c.p.a) : ");
    scanf("%f",&rate_of_interest);
    printf("Enter the years : ");
    scanf("%f",&years);

    simple_interest=(principal*rate_of_interest*years)/100;

    printf("The simple interest is : %f\n",simple_interest);

    return 0;
}
