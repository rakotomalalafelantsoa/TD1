#include <stdio.h>

int main()
{
  int n,s,fact,i;
  printf(" Saisir un nombre: \n");
  scanf ("%d",&n);
  fact=1;
  s=0;
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
    s=s+fact;
  }
  printf(" la somme est %d",s);
  return (0);
}
