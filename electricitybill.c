/* Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include<stdio.h>
int main()
{
    int unit;
    float total_bill;
    float bill;
    printf("enter the electricity unit = ",unit);
    scanf("%d",&unit);
    
    if(unit<=50)
    {
        bill=unit*0.50;
        
        printf("%f rupees is electricity bill ",bill);
    }
    else if(unit<=150 && unit>50)
    {
        bill=0.50+unit*0.75;
        printf("%f rupees is electricity bill\n",bill);
    }
    else if(unit<=250 && unit>150)
    {
        bill=0.50+0.75+unit*1.20;
        printf("%f rupees is electricity bill\n",bill);
    }
    else
    {
        bill=0.50+0.75+1.20+unit*1.50;
        
        printf("%f rupees is electricity bill\n",bill);
    }
    total_bill=bill+bill*0.2;
    printf("%f after 20percentage additional charges\n",total_bill);
    return 0;
}