#include<stdio.h>
void main(){

    int num=5, fact=1;

    for (int i = num ; i > 1 ; i--)
    {

        fact = fact * i;
        
    }
    
    printf("\n %d",fact);
}