//
//  Pand2DA.c
//  
//
//  Created by Laura on 16/09/2022.
//

#include <stdio.h>

// functions
void FunA(int *A)       // pointer : passing 1-D array
{
    printf("%d %d\n", A, &A); // Address of the pointer
    printf("%d\n", A[0]);                     // content
    printf("%d %d\n\n", *A, *(A+1));
}

void FunB(int (*B)[3])     // Augument : 2-D array of integers//
                            //(int B[3]) or (int B[][3])
{
    printf("%d %d %d %d\n", B, *B, B[0], &B[0]); // Address of the pointer
    printf("%d\n", B[1][0]);                     // content
    printf("%d\n\n", *(B[1]+1));
}

void FunC(int C[][2][2])     // Augument : 3-D array of integers//
{
    printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]); // Address of the pointer
    printf("%d\n", C[2][0][1]);                     // content
    printf("%d\n\n", *(C[0][0]+0));
    
}




int main()
{
    int A[] = {8,2};
    FunA(A);                             // A returns int*(pionter)
    
    int B[2][3] = {{2,8,4},{5,6,7}};    // B returns int (*)[3]
    FunB(B);
    
    int C[3][2][2] = {{{2,5},{7,9}},    // C returns int (*)[2][2]
                    {{3,4},{6,1}},
                    {{0,8},{11,13}}};
    FunC(C);
    
    /* printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]); // Address of the pointer
    printf("%d\n", C[0][0][1]);                     // content
    printf("%d\n\n", *(C[0][0]+1));     */
    
    
    return 0;
}
