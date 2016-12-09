/*
student name:swikriti ray
roll:43
subject:programming fundamental
program:write c program to print largest no among two nos using ternary operator
date:9 dec
*/
#include<stdio.h>
#include<conio.h>
int main () {
int a,b,c;
printf("enter a first number:\n");
scanf("%d",&a);
printf("enter a second number:\n");
scanf("%d",&b);
printf("enter a third number:\n");
scanf("%d",&c);
(a>=b&&a>=c)?printf("%d is largest",a):(b>=a&&b>=c)?printf("%d is largest",b): printf("%d is largest",c);
getch();
return 0;
}
