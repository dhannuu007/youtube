#include<stdio.h>
void main(){

    int arr[5]={1,2,3,4,5};
    int *p;

    p = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("\n %d",*p);
        p++;
    }
    

}