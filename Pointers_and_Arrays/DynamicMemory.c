//
//  DynamicMemory.c
//  
//
//  Created by Laura on 17/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  // goes on stack
    int *p;
    
    p = (int*)malloc(sizeof(int));      // How much memory to allocate on the heap
    *p = 10;
    printf("%d\n", *p);
    
    free(p);             // any memory is allocated using malloc is cleared off
    printf("%d\n", *p);
    
    
    p = (int*)malloc(sizeof(int));      // How much memory to allocate on the heap
    *p = 20;
    printf("%d\n", *p);
    
    free(p);
    printf("%d\n", *p);
    
    /* Store an array */
    
    p = (int*)malloc(20*sizeof(int));       /* (20 Number of elemets) : 20 into size of integer (size of onr unit)
                                             one block of memory equal to the total size of the array in bytes */
    
    *p = 2;                             // same p[0] =2
    *(p + 1) = 4;                       //      p[1] = 4
    *(p + 2) = 6 ;
    p[3] = 8;
    p[4] = 10;
    p[5] = 120;
    
    
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);
    printf("%d\n", p[5]);
    
    free(p);
    
    printf("%d\n", *p);
    
    return 0;
}
