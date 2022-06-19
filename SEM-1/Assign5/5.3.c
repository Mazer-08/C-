//3. Write a C program to read alphabet and check whether an alphabet is vowel or consonant
//   using switch case.
#include<stdio.h>
void main(){
char n;
printf("Enter an alphabet: ");
scanf("%c",&n);

switch(n){
    //checking for vowels
  case 'A': case 'E': case 'I': case 'O': case 'U':case 'a': case 'e': case 'i': case'o': case 'u':
    printf("It is a vowel."); break;

    //checking for constants
  case 'b'...'d': case 'f'...'h':case 'j'...'n': case 'p'...'t': case 'v'...'z': case 'B'...'D':
  case 'F'...'H':case 'J'...'N': case 'P'...'T': case 'V'...'Z':
    printf("It is a consonant."); break;

    //for others
  default:
    printf("Invalid input...Please enter an alphabet."); break;
}
printf("\n");
}
