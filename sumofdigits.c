#include<stdio.h>
void main()
{
    int a;
    int sum;
    sum=0;
    printf("enter a numbers");
    scanf("%d",&a);
    do{
        sum=sum+a%10;
        a=a/10;
    }
    while(a!=0);
    printf("value of sum of digit is %d",sum);
    }
    
    
