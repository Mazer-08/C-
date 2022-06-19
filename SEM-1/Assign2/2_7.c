//evaluate arithmetic expression
#include<stdio.h>
void main()
{
  int a,b,c,d,e,f,g,sol;

  printf("Enter the values of a,b,c,d,e,f,g respectively: \n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&f);
  scanf("%d",&g);

  if (c==0 || d==0)
  {
      printf("Value does not exist");
      printf("\n");
  }
  else
  {
      sol=(a+(b/(c*d))-e)*(f-g);
      printf("The result for the above input values is: %d \n",sol);
      printf("\n");
  }
}
