//
//  PType.c
//  
//
//  Created by Laura on 15/09/2022.
//

#include <stdio.h>

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    
  
    printf("Adress of p is %d\n",p);
    printf("Value of p is %d\n\n",*p);
    
    printf("Adress of p+1 is %d\n",p+1);
    printf("Value of p is %d\n\n",*(p+1));
    
    char *c;
    c = (char*)p;
    
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Adress of c is %d\n",c);
    printf("Value of c is %d\n",*c);
    printf("1025 = 00000000 00000000 00000100 00000001\n\n");
    printf("Adress of c+1 is %d\n",c+1);
    printf("Value of c+1 is %d\n\n",*(c+1));
    
    
    printf("Size of float is %d bytes\n", sizeof(float));
    printf("Size of double is %d bytes\n", sizeof(double));
    
    return 0;
}
