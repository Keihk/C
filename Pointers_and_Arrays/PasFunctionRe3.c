//
//  PasFunctionRe3.c
//  
//
//  Created by Laura on 19/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

/* Call by reference -in Heap- */
int *Add(int *a, int *b)       // Called function
                              // a and b pointer to integers local to Add
{
    printf("Address of a in Add = %d\n",&a);
    printf("Value in a of Add (address of x of main) = %d\n",a);
    printf("Value at address atored in a of Add = %d\n\n",*a);
    
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
    
    free(c);
}


void PrintHelloWorld()
{
    printf("Hello World\n");
}


int main()                  // Calling function
{
    int x = 8, y = 8;
    printf("Address of a in main = %d\n",&x);
    
    /* Call by reference */
    int *z = Add(&x,&y);       // value of address
                              // a and b are integers local to Main
    
    PrintHelloWorld();
    
    printf("Sum = %d\n",*z);
    
return 0;
}
