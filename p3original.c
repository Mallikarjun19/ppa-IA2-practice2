#include<stdio.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=2;i<n;i++)
  {
    if(n/i==0)
    {
      count=count+1;
    }
    else
    {
      count=count+0;
    }
  }
  return count;
}
void output(int n,int count)
{
  if(count>0)
  {
    printf("%d is a composite number",n);
  }
  else
  {
    printf("%d is not a composite number",n);
  }
}
void main()
{
  int x;
  x=input_number();

}