#include<stdio.h>
void swap(int*x,int*y);
void sort (int a[],int n);
void main(){
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("write the elements in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    printf("the final array will be");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
void sort (int a[],int n){
    printf("sort executing");
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (a[j]<a[min])
            min=j;
        }
    swap(&a[min],&a[i]);
    }
}
void swap(int*x,int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

