//15. Write a C program to calculate the sum of the square of each digit of the given number.
//[Example: 4534 -> 4^2 + 5^2 + 3^2 + 4^2 = 66]
void main(){
   int n, rem, sum=0;
   printf("Enter a number: ");
   scanf("%d",&n);

   while(n>0){
    rem = n%10;
    n = n/10;
    sum = (rem*rem) + sum;
   }
   printf("SUM = %d",sum);
  printf("\n");
}
