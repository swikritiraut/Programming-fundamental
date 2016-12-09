
/*
student name:swikrit ray
roll:43
sub:programming fundamental
lab no:12
program:write a c program to print largest no among three using if else if ladder
*/
int main() {
int a,b,c;
printf("enter a first number:\n");
scanf("%d",&a);
printf("enter a second number:\n");
scanf("%d",&b);
printf("enter a third number:\n");
scanf("%d",&c);
if(a>=b&&a>=c)
{

    printf("largest is %d",a);
}
else if(b>=a&&b>=c)
{
    printf("largest is %d",b);

}
else if(c>=a&&c>=b)
{

printf("largest is %d",c);
}
getch();
return 0;
}
