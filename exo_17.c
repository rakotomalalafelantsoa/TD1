#include <stdio.h>
float main ()
{ 
  float s,n,fact,i;
  printf("saisir un nombre:");
  scanf("%f",&n);
  fact=1;
  s=0;
  if(n==0)
  {
    printf("La somme des inverses des factoriels est 1\n");
  }
    else 
    {
      for(i=1;i<=n;i++)
      {
        fact=fact*i;
        s=s+(1/fact);
      }
      printf("La somme des inverses des factoriels est %f.2\n",s);
    }
  return(0);
}
