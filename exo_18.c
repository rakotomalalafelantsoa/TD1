#include <stdio.h>
int main ()
{ 
  int a,b,pgcd,r;
  printf("saisir A:");
  scanf("%d",&a);
  printf("\nsaisir B:");
  scanf("%d",&b);
  r=a%b;
  while(r>0)
  {
    a=b;
    b=r;
    r=a%b;
  }
  printf("Le PGCD de ses deux nombres est %d \n",b);
  return(0);
}
