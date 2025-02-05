#include <stdio.h>
float main ()
{
  float note_maths,coef_maths,note_physique,coef_physique,moyenne
  printf ("saisir la note de maths:\n");
  scanf ("%f",&note_maths);
  printf ("saisir la coefficient en maths:\n")
  scanf("%f", &coef_maths);
  printf ("saisir la note de physique:\n");
  scanf ("%f",&note_physique);
  printf ("saisir la coefficient en physique:\n");
  scanf("%f", &coef_physique);
  moyenne=((note_maths*coef_maths)+(note_physique*coef_physique))/(coef_maths*coef_physique);
  printf("La moyenne est %f",moyenne);
  return (0);
}
  
