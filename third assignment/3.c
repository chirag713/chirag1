// write a c program to add two numbers using pointers
#include <stdio.h>
void main()
{
    int a, b, *p, *q, sum;
    
    printf("Enter two integers to add\n");
    scanf("%d%d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Sum of entered numbers = %d\n",sum);
}
