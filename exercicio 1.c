/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  double numero;
  double raiz;
  double quadrado;
  
  printf ("digite o numero");
  scanf ("%lf", &numero);

  if (numero > 0)
    {
      raiz = sqrt (numero);
     printf("a raiz eh %lf", raiz);
    }
  if(numero<0)
    {
    quadrado = pow(numero, 2);
    printf("o quadrado eh %lf", quadrado);
    }
    else{
        printf("zerado");
    }
    
    
}
