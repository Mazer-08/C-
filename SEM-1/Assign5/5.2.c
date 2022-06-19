//2. Write a C program to accept id from employee and display his/her designation
//   using switch case.
#include<stdio.h>
void main(){
int n;
printf("Enter employee id: ");
scanf("%d",&n);

switch(n){
case 101: case 113:
    printf("Designation: Business Analyst");
    break;
case 102: case 107: case 108:
    printf("Designation: QA Engineer");
    break;
case 103: case 109:
    printf("Designation: Front-End Developer");
    break;
case 104: case 111: case 112:
    printf("Designation: Back-End Developer");
    break;
case 105: case 114: case 115:
    printf("Designation: Tester");
    break;
case 106: case 110: case 116:
    printf("Designation: Full Stack Developer");
    break;
default:
    printf("Designation: Please enter a valid employee id.");
    break;
}
printf("\n");
}
