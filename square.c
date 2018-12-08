#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  printf("Enter a number, please\n"); //We ask the user to enter a number
  int n;
  scanf("%d",&n); //The user enter a number
  printf("its square is %d \n",n*n); /* We calculate the square of the number and print it */
  printf("Enter another one, please\n");
  int p;
  scanf("%d",&p);
  printf("it's square is %d \n",p*p);
  return 0;
}
