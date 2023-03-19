#include<stdio.h>
void main(){
    int n,i,num;
     printf("enter size of array");
    scanf("%d",&n);
    int a[n];
      printf("enter the numbers in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number which you want to know");
    scanf("%d",&num);
    int count=0;
    for(i=0;i<n;i++){
    if(a[i]==num)
    count=count+1;
    }
    printf("value of times %d appear in array is %d",num,count);
}


