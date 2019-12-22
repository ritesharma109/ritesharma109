#include<stdio.h>

int main()
{
    int a, b ,c;
    printf("enter value of a \n");
    scanf("%d",&a);
    printf("enter value of b \n");
    scanf("%d",&b);
    printf("enter the value of c \n");
    scanf("%d",&c);
    
    if (a>b  && a>c)
    {
     printf("a is greater than b&c");
    }
    else if (b>a && b>c)
    {
    printf("b is greater than a&C");
    }
    else
    {
    printf("c is greater than a&b");
    }
    return 0;
}