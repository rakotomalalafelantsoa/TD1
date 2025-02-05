#include <stdio.h>
#include <math.h>
float main ()
{
  float a,b,c,delta,x,y,z ;
  printf (" saisir le nombre a :");
  scanf ("%f",&a);
  printf ("saisir le nombre b : ");
  scanf("%f",&b);
  printf ("saisir le nombre c :");
  scanf ("%f",&c);
  if ( (a==0) && (b=0) && (c==0)) 
  {
    printf (" Tout réel est solution");
  }
  else if ( (a==0) && (b==0)) 
  {
    printf ( "Pas de solution");
  }
  else if ((a==0)) 
  {
    x=(-c/b);
    printf("La solution est %2f ",x);
  }
  else if ( (a!=0) && (b!=0)) 
  {
    delta=(b*b)-(4*a*c);
  }
      if (delta == 0)
      {
        x=-b/(2*a);
        printf ("la solution est : %2f",x);
      }
     else if (delta > 0)
    {
      y= (-b-(sqrt(delta)))/(2*a);
      z= (-b+(sqrt(delta)))/(2*a);
      printf ("les solutions sont : %2f,%2f ",y,z);
    }
      else  
    {
      delta=-delta;
      delta=sqrt(delta)/(2*a);
      x= -b/(2*a);
      printf ("les solutions sont  %2f -i %2f et %2f +i %2f",x,delta,x,delta);
    }
    return (0);
}
