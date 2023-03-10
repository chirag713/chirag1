#include<stdio.h>
void main()
{
    int a;
    int b;  
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    while(a!=0||b!=0){
    printf("%d\n",a%10+b%10);
    a=a/10;
    b=b/10;
    }
    
    
}