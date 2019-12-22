/* Write a C program to print all natural numbers in reverse (from n to 1). - using while loop */
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the nth num\n",n);
    scanf("%d",&n);
    for(i=n;i=1;i--)
    printf("%d",i);
    return 0;
}