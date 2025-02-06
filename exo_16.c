#include <stdio.h>
int main ()
{ 
  int n,s=0,fact=1,i;
  printf("saisir un nombre:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    s=s+fact;
  }
    printf("La somme des factoriels est %d\n",s);
  return(0);
}
