/* write a program to print a fabonacci series upto nth term */
#include<stdio.h>
int main()
{
    int a=-1, b=1, c=0, n;
    printf("enter the nth term\n");
    scanf("%d",&n);
    while (c<=n)
    {
    printf("fabonacci series: %d",c);
    a=b;
    b=c;
    c=a+b;

    }

        return 0;
}