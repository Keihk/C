//
//  PasFunctionRe.c
//   Pointers as function returns /* Call by value */
//
//  Created by Laura on 18/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

/* Call by value */
int Add(int a, int b)       // Called function
{
    printf("Address of a in Add = %d\n",&a);
    int c = a + b;
    return c;
}


int main()                  // Calling function
{
    int a = 2, b = 4;
    printf("Address of a in main = %d\n",&a);
    
    /* Call by value */
    int z = Add(a,b);       /* value in a of main is copied to b of Add
                                a(main) != a (function)
                               value in b of main is copied to b of Add*/
    
    printf("Sum = %d\n",z);
    

    return 0;
}
