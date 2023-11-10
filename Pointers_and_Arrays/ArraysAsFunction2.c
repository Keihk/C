//
//  ArraysAsFunction2.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>

void Double(int *A, int size) // int*A = intA[]
{
    int i, sum =0;
    
    printf("SOE - Size of A = %d, size of A[0] = %d\n\n", sizeof(A),sizeof(A[0]));
    
    for(i = 0; i< size ; i++)
    {
        A[i] = 2 * A[i];
        
        printf("i = %d, sum = %d\n", i, A[i]);
    }
    
}


int main()
{
    int A[] = { 1, 2, 3, 4, 5};
    
    int size = sizeof(A)/sizeof(A[0]);  // 20/4 = 5
    int i;
    
    Double(A,size);
    for(i = 0; i < size ; i++ )
    {
       
        printf("Sum %d = %d\n", i, A[i]);
        
        
    }
    printf("Main - Size of A = %d, size of A[0] = %d\n\n", sizeof(A),sizeof(A[0]));
    
    
    return 0;
}
