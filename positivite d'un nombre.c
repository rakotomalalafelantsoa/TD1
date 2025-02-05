//nombre positif ou negatif

#include <stdio.h>
int main()
{
  float x;
  printf ( " saisir un nombre \n ");
  scanf ( "%f",&x);
  if (x > 0)
  {
    printf ("%f est positif \t",x);
  else 
    printf ("%f est négatif \t",x);
  }
  return (0);
  }
  
