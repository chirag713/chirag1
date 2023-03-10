#include<stdio.h>
void main(){
signed int a;    
printf("enter a number\n");
scanf("%d",&a);
if(a<0)
printf("%d is negative number",a);
else if(a>0)
printf("%d is positive number",a);
else printf("%d is zero",a);
}

