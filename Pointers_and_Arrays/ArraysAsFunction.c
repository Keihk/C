//
//  ArraysAsFunction.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>

int SumOfElements(int A[], int size)
{
    int i, sum =0;
    for(i = 0; i< size ; i++)
    {
        sum += A[i];
        
        printf("i = %d, sum = %d\n", i, sum);
    }
    return sum;
}


int main()
{
    int A[] = { 1, 2, 3, 4, 5};
    
    int size = sizeof(A)/sizeof(A[0]);  // 20/4 = 5
    int total = SumOfElements(A, size);
    
    printf("Sum of elements = %d\n", total);
    
    
    return 0;
}
