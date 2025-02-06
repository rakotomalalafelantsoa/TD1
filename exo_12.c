#include <stdio.h>
int main ()
{ 
  int n,somme;
  printf("saisir un nombre:");
  scanf("%d",&n);
  somme=1;
  while(n>0)
  {
    somme=somme+n;
    n=n-1;
  }
  printf("la somme est %d\n",somme);
  return(0);
}
