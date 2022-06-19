//16. C program to enter student marks and find percentage and grade according to given conditions:
//If percentage >= 90% : Grade A
//If percentage >= 80% : Grade B
//If percentage >= 70% : Grade C
//If percentage >= 60% : Grade D
//If percentage >= 40% : Grade E
//If percentage < 40% : Grade F
#include<stdio.h>
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

  if(res>=90){
    printf("%s you have obtained A grade.",name);
  }
  else if(res>=80 && res<90){
    printf("%s you have obtained B grade.",name);
  }
  else if(res>=70 && res<80){
    printf("%s you have obtained C grade.",name);
  }
  else if(res>=60 && res<70){
    printf("%s you have obtained D grade.",name);
  }
  else if(res>=40 && res<60){
    printf("%s you have obtained E grade.",name);
  }
  else if(res<40){
    printf("%s you have obtained F grade.",name);
  }
  printf("\n");
}
