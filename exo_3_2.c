#include <stdio.h>
int main ()
{
  int a,b,c,d;
  printf ("Veuillez saisir A :");
  scanf("%d",&a);
  printf ("Veuillez saisir B :");
  scanf("%d",&b);
  printf ("Veuillez saisir C :");
  scanf("%d",&c);
  d=a;
  a=b;
  b=c;
  c=d;
  printf ("A=%d , B=%d et C=%d\n",a,b,c);
  return (0);
}
