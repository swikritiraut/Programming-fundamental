/*
 student name:swikriti ray
 lab sheet :21
 program:wap of nested loop
 date:20 jan
 */
 #include<stdio.h>
 int main()
 {
	 int i,j;
	 for(i=1;i<=5;i++)
	 {
		 for(j=1;j<=5;j++)
		 {
			 if(i>j)
			 {
				 printf(" ");
			 }
			 else
			 {
				 printf("*");
			 }
		  }
			 printf("\n");
		     }
		     return 0;
			 
		 }
