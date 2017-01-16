/*
student name:swikriti  ray
lab sheet :18
program:write a c program to enter any number and its reverse
date:13 jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i
    ,n,rem=0,rev=0;
    printf("enter the number\n");
    scanf("%d",&i);
    n=i;
    while(i>0)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    if(n==rev)
    {
        printf("No is pallidrome");
    }
    else
    {
        printf("No is not pallidrome");
    }

    return 0;
    getch();
}
