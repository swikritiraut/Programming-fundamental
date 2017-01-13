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
    int i,rem;
    printf("enter the number");
    scanf("%d",&i);
    while(i>0)
    {
        rem=i%10;
        i=i/10;
        printf("%d",rem);
    }
    return 0;
    getch();
}

