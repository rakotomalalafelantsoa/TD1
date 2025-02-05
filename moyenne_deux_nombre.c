#include <stdio.h>
int main()
{
  int x,y,somme,moyenne;
  printf(" Saisir un nombre: \n");
  scanf ("%d",&x);
  printf ("Saisir un nombre: \n");
  scanf ("%d",&y);
  somme=x+y;
  moyenne=somme/2;
  printf("La somme est %d et la moyenne est %d",x,y);
  return (0);
}
