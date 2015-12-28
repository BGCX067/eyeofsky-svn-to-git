#include <stdio.h>

void main3()
{
   char carr[7];
   printf("size of carr : %d\n",carr);

   memset(carr, 'a', 6);
   carr[8] = '\0';
}


