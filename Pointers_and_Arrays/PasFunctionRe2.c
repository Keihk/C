//
//  PasFunctionRe2.c
// Pointers as function returns  /* Call by reference */
//
//  Created by Laura on 18/09/2022.
//

#include <stdio.h>
#include <stdlib.h>


/* Call by reference */
int *Add(int *a, int *b)       // Called function
                              // a and b pointer to integers local to Add
{
    printf("Address of a in Add = %d\n",&a);
    printf("Value in a of Add (address of x of main) = %d\n",a);
    printf("Value at address atored in a of Add = %d\n\n",*a);
    
    int c = (*a) + (*b);
    return &c;
}



int main()                  // Calling function
{
    int x = 8, y = 8;
    printf("Address of a in main = %d\n",&x);
    
    /* Call by reference */
    int *z = Add(&x,&y);       // value of address
                              // a and b are integers local to Main
    
    
    printf("Sum = %d\n",*z);
    
return 0;
}
