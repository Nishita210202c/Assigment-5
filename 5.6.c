//6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("print the first %d even natural numbers:\n", n);

    while(i<=n)
    {
        printf("%d\n", i*2);
        i++;
    }
}    