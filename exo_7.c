#include <stdio.h>
int main ()
{
  int a,b,c;
  printf("saisir le premier nombre : \n");
  scanf ("%d",&a);
   printf("saisir le deuxième nombre : \n");
  scanf ("%d",&b);
   printf("saisir le troisième nombre : \n");
  scanf ("%d",&c);
  if (a>b && a>c)
  {
    printf ("%d est le maximum\n",a);
  }
    else if (b>a && b>c)
    {
    printf ("%d est le maximum\n",b);
    }
      else 
      {
        printf ("%d est le maximum\n",c);
      }
return (0);
} 
