#include <stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter four numbers\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}
int gcd(int a,int b)
{
  int gcd=1;
  while(b!=0)
    {
      gcd=a%b;
      a=b;
      b=gcd;
      
    }
  return a;
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  
}

  


    
  


















