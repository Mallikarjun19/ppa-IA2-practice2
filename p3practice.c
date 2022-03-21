#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int i,count=0;
 for(i=1;i<=n;i++)
   {
     if(n%i==0)
     {
       count=count+1;
      }
   }
  return count;
}
void output(int n,int composite)
{
  if (composite==2)
  {
    printf("the given number %d is not a composite number",n);
  }
  else
  {
   printf("the given number %d is a composite number",n); 
  }
}
void main()
{
  int x,c;
  x=input_number();
  c=is_composite(x);
  output(x,c);
}