/* Write a C program to check whether a number is divisible by 5 and 11 or not. */
#include<stdio.h>

int main()
{
    int n;
    printf("enter no. to divide");
    scanf("%d",&n);
    if (n%5==0 && n%11==0)
    printf("no. is divisible by 5 and 11");
    else 
    printf("no. is not divisible by 5 and 11");
    return 0;
}