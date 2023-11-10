//
//  characterAandP2.c
//  
//
//  Created by Laura on 16/09/2022.
//

#include <stdio.h>

void print(char* C)
{
    int i = 0;
    while(C[i] != '\0')   // C[i] = *(C+i)
    {
        printf("%c",C[i]);
        i++;
    }
    printf("\n");
}

void printC(char* C)
{
    while(*C != '\0')
    {
        printf("%c",*C);
        C++;
    }
    printf("\n");
}

int main()
{
    //char C[20] = "Hello\n";  // string gets stored in the space for array
    char *C = "Hello\n";     // string gets stored as compile time constant
    
    print(C);
    
    printC(C);
    
    
    return 0;
}
