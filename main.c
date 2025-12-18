#include <stdio.h> 

#include "MatrixOp.h" 

 

int main(void) { 

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
int C[SIZE][SIZE]; 

printf("A + B =\n"); 
add(A, B, C); 
mat_print(C); 
}