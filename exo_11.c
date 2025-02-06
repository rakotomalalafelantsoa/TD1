#include <stdio.h>
int main ()
{ 
  int i,n,r=1;
  printf("saisir un nombre:");
  scanf("%d",&n);
  if (n==0)
  {
    printf ("Le factoriel est 1\n");
  }
     else
     {
      for(i=1;i<=n;i++)
      {
        r=r*i;
      }
      printf("Le factoriel est %d\n",r);
     }
  return (0);
}
