// write a c program to count the frequency of each charecter of the string
#include<stdio.h>
#include<string.h>
void count(char str[100])
{
    int n,f[100],a=0,i,j;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        a=1;
        if(str[i])
        {
            for(j=i+1;j<n;j++)
            {
                if(str[i]==str[j])
                {
                    a++;
                    str[j]='\0';
                }
            }
            printf("The frequency of '%c' is %d",str[i],a);
        }
    }
}
void main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    count(str);
    
}