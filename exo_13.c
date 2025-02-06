#include <stdio.h>
int main ()
{ 
  int n,p;
  printf("saisir un nombre:");
  scanf("%d",&n);
  p=1;
  while(n>1)
  {
    p=p*n;
    n=n-1;
  }
  printf("Le produit est %d\n",p);
  return(0);
}
