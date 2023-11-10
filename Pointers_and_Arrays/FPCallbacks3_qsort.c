//
//  FPCallbacks3_qsort.c
//  Function pointers and callbacks
//
//  Created by Laura on 19/09/2022.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int A = *((int*)a); // typecasting to int*, getting value
    int B = *((int*)b);
    return A - B;
}


int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);
    for(i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
