/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  int numero;
  printf ("Digite seu numero");
  scanf ("%d", &numero);

  if (numero == 5)
    {
      printf ("igual a 5");
    }
  else if (numero == 200)
    {
      printf ("igual a 200");
    }
  else if (numero == 400)
    {
      printf ("igual a 400");
    }
  else if (numero >= 500 && numero <= 1000)
    {
      printf ("entre 500 y 1000");
    }
  else
    {
      printf ("fora");
    }

}
