#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  printf("Enter a number, please\n");
  int n;
  scanf("%d",&n); //Saisir un entier au clavier
  printf("its square is %d \n",n*n); //On affiche le carré de l'entier
  printf("Enter another one, please\n");
  int p;
  scanf("%d",&p);
  printf("it's square is %d \n",p*p);
  return 0;
}
