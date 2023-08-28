/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  int A = 12;
  int B = 15;
  int C = 11;

  if (A > B && B > C)
    {

      printf ("%d", C);
      printf ("%d", B);
      printf ("%d", A);

    }
  if (A > C && C > B)
    {

      printf ("%d", B);
      printf ("%d", C);
      printf ("%d", A);

    }
  if (B > A && A > C)
    {
      printf ("%d", C);
      printf ("%d", A);
      printf ("%d", B);


    }
  if (B > C && C > A)
    {
      printf ("%d", A);
      printf ("%d", C);
      printf ("%d", B);


    }
  if (C > A && A > B)
    {


      printf ("%d", B);
      printf ("%d", A);
      printf ("%d", C);
    }
  if (C > B && B > A)
    {
      printf ("%d", A);
      printf ("%d", B);
      printf ("%d", C);


    }
}
