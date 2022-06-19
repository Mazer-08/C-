//grade calculator
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  float mm,cm,pm,em,res;
  int roll;
  char name[25];
//taking input
  printf("Enter your name: ");
  scanf("%[^\n]s", & name);

  printf("Enter your Roll No.: ");
  scanf("%d",&roll);

  printf("Enter your Maths Marks(Out of 100): ");
  scanf("%f",&mm);

  printf("Enter your Chemistry Marks(Out of 100): ");
  scanf("%f",&cm);

  printf("Enter your Physics Marks(Out of 100): ");
  scanf("%f",&pm);

  printf("Enter your English Marks(Out of 100): ");
  scanf("%f",&em);
//calculating
  res=(mm+cm+pm+em)/4;
//output
  printf("The value of the expression is: %.1f",res);
  printf("\n");
}
