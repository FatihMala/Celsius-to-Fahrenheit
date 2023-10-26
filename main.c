#include <stdio.h>
#include <stdlib.h>

int main()
{

   float cels, fah;
   printf("enter cels:") ;
   scanf("%f", & cels);
   fah= ((9.0/5.0*cels)+32);
   printf("%.3lf c=%0.3lf F", cels, fah);
   return 0;


}
