//2. Write a C program considering below information: when the color of traffic is green, print go,
//   in the case of the traffic is yellow print ready, and if the traffic color is red, prints stop.
#include<stdio.h>
void main(){
 int a;
 again:
 printf("Please enter 1 for Green || 2 for Yellow || 3 for Red : \n");
 scanf("%d",&a);

 switch (a){
 case 1:{printf("Go");
         break;}
 case 2:{printf("Ready");
         break;}
 case 3:{printf("Stop");
         break;}
 default:{goto again;}
}
printf("\n");
}

