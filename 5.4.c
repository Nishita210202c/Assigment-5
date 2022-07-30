//4. Write a program to print the first N odd natural numbers.

#include<stdio.h>
int main()
{
    int  i=1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nprint the first %d odd natural numbers:\n",n);
    while(i<=n)
    {
      
      printf("%d\n", 2*i-1);
      i++;
    }
    return 0;
}    