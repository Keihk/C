//
//  characterAandP3.c
//  
//
//  Created by Laura on 16/09/2022.
//

#include <stdio.h>
#include <string.h>


void print(const char* C)
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
    char C[20] = "Hello\n";  // string gets stored in the space for array
    
    print(C);
    
    
    
    return 0;
}
