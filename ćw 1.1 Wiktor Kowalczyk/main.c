#include <stdio.h>
#include <stdlib.h>

int main(void)

{
   float cale, cncm=2.54, wynik;
   printf("Podaj liczbe cali ktora chcesz przeliczyc na cm: \n");
   scanf("%f",&cale);
   wynik=cale*cncm;

   printf("%f cali to: ",cale);
   printf("%f",wynik);

   return 0;
}
