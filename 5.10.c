//10. Write a program to print a table of N

#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("print a table of %d:\n", n);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i );
    }
    return 0;
}