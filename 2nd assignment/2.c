#include<stdio.h>
void main(){
    int m,n,i;
    printf("enter the size of first array\n");
    scanf("%d",&m);
    printf("enter size of second array\n");
    scanf("%d",&n);
    int a[m];
    int b[n];
    int c[m+n];
    printf("enter the inputs in first array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter the numbers in second array\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    c[i]=a[i];
    for(i=0;i<n;i++)
    c[m+i]=b[i];
    printf("the resultant merged array in reverse order will be\n");
    for(i=m+n-1;i>=0;i--)
    printf("%d\n",c[i]);
}