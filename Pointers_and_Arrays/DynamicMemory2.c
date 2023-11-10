//
//  DynamicMemory2.c
//  
//
//  Created by Laura on 18/09/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
   
    
    int n;
    
    /* calloc */
    
    printf("Enter size of array\n");
    scanf("%d",&n);
    
    int *C = (int*)calloc(n,sizeof(int));       // dynamically allocated array
    
    /*for(int i = 0; i < n; i++ )
    {
        printf("%d", C[i]);
    }
    printf("\n");*/
    
    for(int i = 0; i < n; i++ )
    {
        C[i] = i+1 ;
        
        printf("%d", C[i]);
    }
    printf("\n\n");
    
    /* malloc */
    
    printf("Enter size of array\n");
    scanf("%d",&n);
    
    
    int *M = (int*)malloc(n*sizeof(int));       // dynamically allocated array
    
    for(int i = 0; i < n; i++ )
    {
        printf("%d", M[i]);
    }
    printf("\n");
    
    for(int i = 0; i < n; i++ )
    {
        M[i] = i+1 ;
        
        printf("%d", M[i]);
    }
    
    /* realloc */
    int *R = (int*)realloc(M, 2*n*sizeof(int));  // 2times = 2*n : 1/2 = n/2
                                                // int *R = (int*)realloc(M, (2/n)*sizeof(int));
    
    printf("\nPrev block address = %d, new address = %d\n",M,R);
    
    for (int i = 0; i <2*n; i++)
    {
        printf("%d\n", R[i]);
    }
    
    printf("\n\n");
    
    
    free(C);
    free(M);
    free(R);
    
    return 0;
}
