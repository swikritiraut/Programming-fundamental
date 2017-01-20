/*
student name:swikriti ray
lab sheet:21
program:wap to print fibonacci series up to 'n' terms
subject:programming fundamental
date:20 jan
*/
#include<stdio.h>
int main()
{
    int  a=1,b=1,c,n,i;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d \t",c);
    a=b;
    b=c;
    }
    return 0;
}


