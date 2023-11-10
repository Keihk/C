//
//  FPandCallbacks2.c
//  Function pointers and callbacks
//
//  Created by Laura on 19/09/2022.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// simple bubble sort
void BubbleSort(int *A, int n)       //void sort(int A[], int n) increcing
{
    int i, j, temp;
    
    for(i = 0; i < n; i++)
        for(j= 0; j<n -1; j++)
    {
        if(A[j] > A[j+1])        //compare A[j] with A[j+1} and SWAP if needed
         {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}

void BubbleSortde(int *A, int n)       //void sort(int A[], int n) decresing
{
    int i, j, temp;
    
    for(i = 0; i < n; i++)
        for(j= 0; j<n -1; j++)
    {
        if(A[j] < A[j+1])        //compare A[j] with A[j+1} and SWAP if needed
         {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}

        //**************
// callback function should compare two integres, should return
// 1 if first element has higer rank,
// 0 if element are equal,
// -1 if second element has higher rank

int compare(int a, int b)
{
    if(a > b) return -1;        // increse : 1 , decrese : -1
    else return 1;              // increse : -1 , decrese : 1
}

int absoulte_compare(int a,int b)
{
    if(abs(a) > abs(b)) return 1;
    return -1;
}

void BubbleSortF(int *A, int n, (*compare)(int,int))       //void sort(int A[], int n) increcing & decrecing
{
    int i, j, temp;
    
    for(i = 0; i < n; i++)
        for(j= 0; j<n -1; j++)
    {
        if(compare(A[j],A[j+1]) > 0 )       //compare A[j] with A[j+1} and SWAP if needed
         {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}




        //**************

int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4};    //Array:sort in increasing order =>{1,2,3,4,5,6}
    
    BubbleSort(A,6);
    for(i =0; i<6; i++)
    printf("%d ", A[i]);
    
    printf("\n");
    
    BubbleSortde(A,6);
    for(i =0; i<6; i++)
    printf("%d ", A[i]);
    
    printf("\n");
    
    BubbleSortF(A,6,compare);
    for(i =0; i<6; i++)
    printf("%d ", A[i]);
    
    printf("\n");
    
    
    int j, B[] = {-31, 22, -1, 50, -6,4};
    
    BubbleSortF(B,6,absoulte_compare);
    for(j =0; j<6; j++)
    printf("%d ", B[j]);
        
    return 0;
}
