// Write a C program to find the factorial of a number using pointers.
#include <stdio.h>
void Fact(int n,int *f)
{
    int i;
    *f =1;
    for(i=1;i<=n;i++)
    *f=*f*i;
}
void main()
{
    int fact;
    int num;
	printf(" Input a number : ");
	scanf("%d",&num);		 
    Fact(num,&fact);
    printf(" The Factorial of %d is : %d ",num,fact);
}