#include<stdio.h>
void main()
{
    int n,i,j;
    int count=0;
    int max=0;
    int num;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers in the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            
        }
        if (count>max)
            {
                max=count;
                num=a[i];
            }
            count=0;

    }
    printf("the number which occurs maximum times is %d\n",num);
    printf("%d repeats for %d times",num,max);
}