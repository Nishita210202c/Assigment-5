//1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int i, n;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("print MySirG %d times on the screen:\n", n);

    for(i=1; i<=n; i++)
    {
        printf("\nMySirG");
    }
    return 0;
}