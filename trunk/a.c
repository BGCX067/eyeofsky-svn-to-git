#include <stdio.h>

int gNumber;


int f(int * a){

    a[gNumber] = 0;

    printf("%s", a+1);
    free(a);
}

int f1()
{
   int arr[3];
   
   gNumber=-1;
   arr[gNumber] = 0;
   f(arr);
   arr[-1] = 0;
   
    
   return 0;
}
