#include <stdio.h>
#include <math.h>
int main ()
{ 
  float n,s;
  int i;
  printf("saisir un nombre:");
  scanf("%f",&n);
  s=1;
  for(i=1;i<=n;i++)
  {
    s=s+(pow(10,i));
  }
  printf("La somme est %f\n",s);
  return(0);
}
