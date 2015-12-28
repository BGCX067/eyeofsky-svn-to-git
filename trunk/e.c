#include <stdio.h>

int main4()
{
   char carr[7];
   printf("size of carr : %d\n",sizeof(carr));

   memset(carr, 128, sizeof(carr));
   //carr[6] = '\0';
   printf("carr = %s\n",carr);

   free(carr);
   return 0;
}


/* make rev 35 */
/* make rev 36 */