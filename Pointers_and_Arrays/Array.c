//
//  Array.c
//  
//
//  Created by Laura on 14/09/2022.
//

#include <stdio.h>

int main(){
    
    int a = 123;
    int *p = &a;
    
    /* a = 123; */
    /* p = &a; */
    
    printf("%d\n",a);
    printf("%d\n",*p);
    
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",&p);
    
    *p = 12;
    
    printf("%d\n",a);
    printf("%d\n",*p);
    
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",&p);
    
    int b = 20;
    *p = b;
    
    printf("%d\n",a);
    printf("%d\n",*p);
        
    
    return 0;
}
