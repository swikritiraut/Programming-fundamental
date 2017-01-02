/*
name:swikriti ray
subject:programming fundamental
date:2jan
lab sheet no :14
program:wap to check no is odd or even using while loop
*/
#include<stdio.h>
#include<conio.h>
int main() {
int a;
printf("enter the number:\a");
scanf("%d",&a);
while(a>0)
{
    if(a%2==0)
{
    printf("no is even",a);
    a=0;
}
else
  {
      printf("no is odd",a);
      a=0;
  }
}
getch();
return 0;
}
