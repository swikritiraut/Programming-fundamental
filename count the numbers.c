#include<stdio.h>
#include<conio.h>
int  main()
{
    int i,count=0;
    printf("Enter any number\n");
    scanf("%d",&i);
    while(i>0)
    {
        i=i/10;
        count=count+1;
    }
    printf("The number of count is %d",count);
    getch();
    return 0;

}
