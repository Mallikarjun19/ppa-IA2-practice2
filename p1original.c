#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height of triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("the area of triangle is %f",area);
}
void main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
}