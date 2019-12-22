/* Write a C program to input any alphabet and check whether it is vowel or consonant */
#include<stdio.h>
int main()
{
    char opt; 
    printf("enter ant alphabet to check it is vowel or constant\n");
    scanf(" %c",&opt);

    switch (opt)
    {
    case 'a':
        printf("a is vowel\n");
        break;
    case 'e':
        printf("b is vowel\n");
        break;
    case 'i':
        printf("e is vowel\n");
        break;
    case 'o':
        printf("o is vowel\n");
        break;
    case 'u':
        printf("u is vowel\n");
        break;
    default:
        printf(" %c is constant\n",opt);
        break;
    }
    return 0;
}