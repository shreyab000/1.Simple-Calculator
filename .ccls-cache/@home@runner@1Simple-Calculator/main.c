#include<stdio.h>
int main()
{
  int num1,num2;
  float result;
  char op;
  printf("enter the two numbers\n");
  scanf("%d%d",&num1,&num2);
  printf("enter the operator\n");
  printf("+ for addition\n");
  printf("- for subtraction\n");
  printf("* for multiplication\n");
  printf("/ for division\n");
  printf("%% for modulus\n");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=num1+num2;
  }
  else if(op=='-')
  {
    result=num1-num2;
  }
  else if(op=='*')
  {
    result=num1*num2;
  }
  else if(op=='/')
  {
    if(num2==0)
    {
      printf("retry and enter a non zero number...\n");
      return(-1);
    }
    result=num1/num2;
  }
  else if(op=='%')
  {
    if(num2==0)
    {
      printf("retry and enter a non zero number...\n");
      return(-1);
    }
    result=num1%num2;
  }
  else
  {
    printf("invalid operator..\n");
    return 1;
  }
  printf("%f",result);
  return 0;
  }
  
  
  
  
