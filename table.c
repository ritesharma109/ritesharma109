/* Write a C program to print multiplication table of any number */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the table = %d",n);
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        j=n*i;
        printf("%d*%d=%d\n",n,i,j);

    }
    return 0;
}