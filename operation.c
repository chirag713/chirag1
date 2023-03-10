#include<stdio.h>
void main(){
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
switch(1){
case 1:printf("sum of two number is %d\n",a+b);
       printf("difference of two number is %d\n",a-b);
       printf("product of two number is %d\n",a*b);
       printf("quotient of two number is %d\n",a/b);
       printf("remainder of two number is %d\n",a%b);
       break;
}
}

