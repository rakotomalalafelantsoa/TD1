#include <stdio.h>
int main ()
{ 
  int n,i,m;
  printf("saisir un nombre:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    m=n%i;
  }
    if (m==0)
    {
      printf("%d n'est pas premier\n",n);
    }
      else 
      {
        printf("%d est premier\n",n);
      }
  
  return(0);
}
