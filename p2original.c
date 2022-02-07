#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the length of side of the triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int r;
  if(a==b==c)
  {
    r=1;
  }
  else
  {
    r=0;
  }
  return r;
}
void output(int a,int b,int c)
{
  int r;
  if (r=0)
  {
    printf("the triangle with sides %d,%d and %d is not scalene",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d,%d and %d is scalene,a,b,c",a,b,c);
  }
}
void main()
{
  int x,y,z;
  x=input_side();
  y=input_side();
  z=input_side();
 check_scalene(x,y,z);
  output(x,y,z);
}
