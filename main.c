#include <stdio.h> 
#include "MatrixOp.h" 

 int main(void) 

{ 

 int A[SIZE][SIZE] = { 

 {1, 2, 3}, 

 {4, 5, 6}, 

 {7, 8, 9} 

}; 

int B[SIZE][SIZE] = { 
{9, 8, 7}, 
{6, 5, 4}, 
 {3, 2, 1} 

 }; 

 int C[SIZE][SIZE] = { 
{1, 2, 3}, 
{0, 1, 4},  
{5, 6, 0} 
 }; 
 int C[SIZE][SIZE]; 
 double Inv[SIZE][SIZE]; 
printf("A + B =\n"); 
 add(A, B, C); 
 print(C); 
 printf("\n"); 
 printf("A - B =\n"); 


print(R); 

 
printf("\n"); 

 

 printf("A mulelm B =\n"); 
mulelm(A, B, R); 

print(R); 

 

printf("\n"); 

 

 printf("A mul B =\n"); 

mul(A, B, R); 

print(R); 

 printf("\n"); 

 