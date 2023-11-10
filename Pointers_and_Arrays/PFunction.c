//
//  PFunction.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>

void Increment(int *p)
{
    *p = (*p)+1;
    
}

int main()
{
    int a = 10;
    
    Increment(&a);
   
    printf("a = %d\n", a);
    
    int b = 30;
    
    Increment(&b);
    
    printf("b = %d\n", b);
    
    return 0;
}
