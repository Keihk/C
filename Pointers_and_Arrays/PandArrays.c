//
//  PandArrays.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>

int main()
{
    int A[5] = {2, 4, 5, 8, 1};
    int i;
    
    printf("%d\n",A);
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d\n",*A);
    
    for(i = 0; i<5; i++)
    {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
        
    }
    
    
    return 0;
}
