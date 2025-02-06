#include <stdio.h>
int main ()
{ 
  float n,i;
  float somme;
  printf("saisir un nombre:");
  scanf("%f",&n);
  somme=0;
  for (i=1;i<=n;i++)
  {
    somme=(somme)+(1/i);
  }
   printf("La somme est %.2f \n",somme);
  return(0);
}
