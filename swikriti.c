/*
student name:swikriti ray
roll:43
subject:programming fundamental
lab sheet no:12
program:wap to print largest no among three no using ternary operator
*/
#include<stdio.h>
int main() {
int a,b,c ;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
printf("enter the third number:\n");
scanf("%d",&c);
(a>=b&&a>=c)?printf("%d is largest",a):printf("%d is largest",c);
return 0;
}
