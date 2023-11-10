//
//  PGeneric.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>
int main()
{
    int a = 5;
    int *b = &a;
    
    
    *b = 6;
    
    int** c = &b;
    int*** d = &c;
    
    
    
    printf("b = %d\n", *b); // 6
    printf("c = %d\n", **c); // 6
    /* printf("c = %d\n", *(*c)); // 6 */
    printf("d = %d\n\n", ***d); // 6
    
    printf("c = %d\n", *c); // adress
    printf("d = %d\n", *d);
    printf("b = %d\n", b);
    
    
    *** d = 10;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("b = %d\n", *b);
    
    ** c = *b + 2;
    printf("a = %d\n", a);
    
    
    return 0;
}
