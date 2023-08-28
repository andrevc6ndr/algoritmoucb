/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  int A = 5;
  int B = 6; 
  int C = 7; 
  int D = 8;
    if(A>B && A> C && A> D){
        printf("A eh maior!");
    }
    if(B> A && B> C && B> D){
        printf("B eh maior!");
    }
    if(C> B && C> A && C> D){
        printf("C eh maior!");
    }
    if(D> A && D>  B && D> C){
        printf("D eh maior!");
    }
    if(A<B && A< C && A< D){
        printf("A eh menor...");
    }
    if(B< A && B< C && B< D){
        printf("B eh menor...");
    }
    if(C< B && C< A && C< D){
        printf("C eh menor...");
    }
    if(D< A && D<  B && D< C){
        printf("D eh menor...");
    }
}
