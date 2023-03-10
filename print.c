#include<stdio.h>
void main(){
    int a;
    a=1;
    for(a=1;a<=100;a++)
    {
        if(a%3==0)
    printf("Fizz\n");
    else if(a%5==0)
    printf("Buzz\n");
    else printf("%d\n",a);
    }

}