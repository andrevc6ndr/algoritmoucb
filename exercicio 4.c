/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  int A = 9;
  int B = 8; 
  int C = 11; 
  
  if(A>B && B>C){
      printf("%d", A);
      printf("%d", B);
      printf("%d", C);
  }
  if(A>C && C>B){
      printf("%d", A);
      printf("%d", C);
      printf("%d", B);
  }
  if(B>A && A>C){
      printf("%d", B);
      printf("%d", A);
      printf("%d", C);
  }
    if(B>C && C>A){
      printf("%d", B);
      printf("%d", C);
      printf("%d", A);
  }
    if(C>A && A>B){
      printf("%d", C);
      printf("%d", A);
      printf("%d", B);
  }
      if(C>B && B>A){
      printf("%d", C);
      printf("%d", B);
      printf("%d", A);
  }
}
