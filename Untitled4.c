/*
student name:swikriti ray
lab sheet:17
program:wap to display the following patterns
subject:programming fundamental
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
   {
        printf("%d",j);

   }
    printf("\n");

}
getch();
return 0;
}


