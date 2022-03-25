#include<stdio.h>
int input_number()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int i,count=0;
if(n==0||n==1)
    {
        return -1;
    }
else
    {
      for(i=2;i<n;i++)
    {
      if(n%i==0)
        {
         count=count+1;
        }
    }
    return count;
    }
}
void output(int n,int composite)
{
    if(composite>0)
    {
        printf("the given number %d is composite",n);
    }
    else if(composite==-1)
    {
        printf("the given number %d is neither prime number nor composite number",n);
    }
    else
    {
        printf("the given number %d is prime number",n);
    }
}
void main()
{
    int n,composite;
    n=input_number();
    composite=is_composite(n);
    output(n,composite);
}