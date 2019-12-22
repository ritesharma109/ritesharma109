/* Write a C program to check whether a year is leap year or not. */
#include<stdio.h>
int main()
{
    int n;
    printf("enter the year to check is leap year or not ");
    scanf("%d",&n);
    if (n%4==0 || n%100==0)
    {
        printf("%d yaer is leap year\n",n);
    }
    else
    {
        printf("%d year is not a leap yaer",n);
    }
    return 0;
}