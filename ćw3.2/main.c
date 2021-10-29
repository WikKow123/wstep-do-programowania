#include <stdio.h>

int main(void)
{
  int wiek;
  int dni=0;
  printf("Podaj swoj wiek w latach: ");
  scanf("%d",&wiek);
  dni=wiek*365;
  printf("Wiek w dniach: %d\n", dni);

  return 0;
}
