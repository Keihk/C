//
//  FPandCallbacks.c
//  Function pointers and callbacks
//
//  Created by Laura on 19/09/2022.
//

#include <stdio.h>

void A()                // callback function
{
    printf("Hello!\nHi\n\n!");
}

void B(void (*ptr)())     // function pointer as argument
       {
    ptr();      //call-back function "ptr" points to
}


int main()
{
    A();
    
    B(A);                // void (*p)() = A;
                    // B(p);
    
    return 0;
}
