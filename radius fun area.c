/*
student name:swikriti ray
lab sheet:20
subject:programming fundamental
program:Wap to find cube of any numbers using function
date:18 jan                                                                                              
*/
#include<stdio.h>
void area();
int main()
{
	int r;
	printf("enter the radius");
	scanf("%d",&r);
area(r);
return (0);
}
	void area(int r)
	{
		float a;
		 a=3.14*r*r;
		 printf("the area is %f",a);
	 }
	
		
