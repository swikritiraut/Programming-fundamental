/*
student name:swikriti ray
roll:43
subject:programming fundamental
lab sheet no:12
program:write a c program to check odd or even no using ternary operant
date:9 dec
*/
#include<stdio.h>
#include<conio.h>
int main (){
int n;
printf("enter the number:\n");
 scanf("%d",&n);
(n%2==0) ?printf("%d is even",n):printf("%d is odd",n);
  getch();
  return 0;
}
