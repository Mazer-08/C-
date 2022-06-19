//days to weeks, months, years
#include<stdio.h>
#include<math.h>
void main()
{
  int days,yrs,weeks,months;
//taking input
  printf("Enter the no. of days: ");
  scanf("%d",&days);
//calculating
  weeks = (days/7);
  months = (days/30);
  yrs = (days/365);
//output
  printf("%d days have %d year(s). \n",days,yrs);
  printf("%d days have %d month(s). \n",days,months);
  printf("%d days have %d week(s). \n",days,weeks);
  printf("\n");
}
