//
//  characterAandP.c
//  
//
//  Created by Laura on 16/09/2022.
//

#include <stdio.h>
#include<string.h>   // a bunch of function for string manipulation

int main()
{
    char C[20];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    
    printf("%s\n",C);
    printf("Size in bytes = %d\n", sizeof(C));  // 20
    
    
    int len = strlen(C);        // counting the length of the string
    printf("Length = %d\n\n",len);

    
    char A[] = "JOHN";
    printf("%s\n",A);
    printf("Size in bytes = %d\n", sizeof(A));  // 5
    
    int lena = strlen(A);
    printf("Length = %d\n\n",lena);               // 4
    
    
    char E[5] = {'J','O','H','N','\0'};
    
    printf("%s\n",E);
    printf("Size in bytes = %d\n", sizeof(E));  // 5
    
    int lene = strlen(E);
    printf("Length = %d\n",lene);               // 4
    
    return 0;
}
