#include <stdio.h>

int main2()
{
   char carr[7];
   printf("size of carr : %d\n",sizeof(carr));

   memset(carr, 1024, sizeof(carr));
   //carr[6] = '\0';
   printf("carr = %s\n",carr);

   return 0;
}


