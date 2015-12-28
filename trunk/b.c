#include <stdio.h>

int gNumber;


int b(int * a){

    a[gNumber] = 0;

    printf("%s", a+1);
    free(a);
    free(a);
}


int b1()
{
   int arr[3];
   
   gNumber=-1;
   arr[gNumber] = 0;
   a(arr);

   
    
   return 0;
}

