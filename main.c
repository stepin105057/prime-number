#include "prime_number.h"

int check_prime(int a)
{
   int c;

   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
      return 0;
   }
   return 1;
}
