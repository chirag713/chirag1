#include<stdio.h>
void main(){
    int n,i;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("enter the numbers in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=a[i];
    printf ("array will be written below\n");
    for(i=0;i<n;i++)
    printf("%d\n",b[i]);
}