//
//  PointerArithmetic.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>


int main()
{
    
    int a = 123;
    int *p = &a;
 
    // pointer arithmetic
    
    printf("Adress of a is %d\n",&a);
    printf("Adress of p is %d\n",p);
    printf("value at adress p is %d\n", *p);
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Adress of p+1 p is %d\n", p+1);
    printf("Adress of p++ p is %d\n", p++);
    printf("value at adress p+1 is %d\n", *(p+1));
    
    printf("size of void is %d bytes\n", sizeof(void));
    printf("size of character is %d bytes\n", sizeof(char));
    
    return 0;
}
