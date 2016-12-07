/*
student name:swikriti ray
roll no:43
subject:programming fundamental
program:wap check THE LARGE NUMBEER
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("enter a first number:\n");
scanf("%d",&a);
printf("enter a second number:\n");
scanf("%d",&b);
printf("enter a third number:\n");
scanf("%d",&c);
if(a>=b && a>=c)
{
    printf("largest is:%d",a);
}
   else if (b>=a && b>=c)
   {
       printf("largest is:%d",b);

   }
   else
   {
       printf("largest is:%d",c);
   }
   getch();
   return(0);
}
