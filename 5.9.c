//  9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("print the cubes of first %d natural numbers:\n", n);

    while(i<=n)
    {
        printf("%d = %d\n", i, i*i*i);
        i++;
    }
}    