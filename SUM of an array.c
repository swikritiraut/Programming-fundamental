/*
student name:swikritin ray
subjct:programming fundamental
lab sheet:24
date:1 Feb
program:wap to find the sum ofelements of an array containing 10 elements
*/
#include<stdio.h>
int main()
{
	int num[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter the number");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+num[i];
	}
	printf("the sum of elements of array :%d", sum);
	return 0;
}
