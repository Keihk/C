//
//  FunctionP.c
//  Function Pointers in C/C++
//
//  Created by Laura on 19/09/2022.
//

#include <stdio.h>

int Add(int a,int b)      //function
{
    return a+b;
}

int *Func(int,int);     //function returns int*

void PrintHello(char* name)
{
    printf("Hello %s\n", name);
}



int main()
{
    int c;
    int (*p)(int,int);      //declaring a function pointer
    // pointer to function should be exactly the same as in the function
    
    p = Add;             // (p = &Add) function name will return as pointer
                        // address od Add filling into p : p points to Add
                      
    
    c = p(3,3);      // (c = (*p)(2,3);)    function pointer
                        //de-referencing and executing the function
    
    printf("%d\n",c);
    
    
    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Tom");
    
    
    return 0;
}
