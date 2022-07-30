//7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i, n;
    printf("enter a number: ");
    scanf("%d", &n);

    printf("the first %d even natural numbers in reverse order:\n", n);
    for(i=n; i>=1; i--)
    {
        printf("%d\n", 2*i);
    }
    return 0;
}