/*
student name :swikriti ray
lab sheet  no:18
roll no:47
program:write a program to calculate sum of digits of any numbers
date:13 jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,b;
    printf("enter any number");
    scanf("%d",&n);
    while (n!=0)
    {
        b=n%10;
        n=n/10;
        sum=sum+b;
    }
    printf("sum of digit=%d",sum);
    getch();
    return(0);
}
