/*
student name:swikriti ray
lab sheet:20
subject:programming fundamental
program:Wap to find cube of any numbers using function
date:18 jan
*/
#include<stdio.h>
void cube();
int main ()
{
	cube();
	return(0);
}
void cube()
{
	int n,result;
	printf("enter any number");
	scanf("%d",&n);
	result=n*n*n;
	printf("cube of value is %d",result);
	
}
