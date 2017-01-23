#include<stdio.h>
#include<conio.h>
int main ()
{
  int i,n,count=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(n%i==0)
        count ++;
  }
  if(count==2)
      {
          printf("the number is prime");
       }
       else
       {
           printf("the number is not prime");
       }
       return 0;
}

