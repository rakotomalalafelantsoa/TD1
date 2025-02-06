#include <stdio.h>
int main ()
{
  int a,b,c;
  printf("Veuillez saisir A :");
  scanf("%d",&a);
  printf ("Veuillez saisir B :");
  scanf("%d",&b);
  c=b;
  b=a;
  a=c;
  printf("A=%d et B=%d",a,b);
  return(0);
}
