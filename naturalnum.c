/* Write a C program to print all natural numbers in reverse (from n to 1). - using while loop */
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the nth num\n",n);
    scanf("%d",&n);
    while(n>i)
    {
        n=n-1;
        printf("%d",n);

    }
    return 0;
}