
#include<stdio.h>
void diameter(float r);
void area(float r);
void circumfrence(float r);

int main()
{
	float r;
	printf("enter the value of radious\n:");
	scanf("%f",&r);
	diameter(r);
	area(r);
	circumfrence(r);
	return 0;
}
void diameter(float r)
{
	float d;
	d=2*r;
	printf("\ndiameter =%0.2f",d);
}
void area(float r)
{
	float a;
	a=pi*r*r;
	printf("\narea of circle=%0.2f",a);
}
void circumfrence(float r)
{
	float c;
	c=2*pi*r;
	printf("\ncircumfreence of circle=%0.2f",c);
}
