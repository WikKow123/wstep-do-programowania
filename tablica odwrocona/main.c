#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];

    for (int i=0;i<10;i++){
      printf("podaj liczbe: \n", tab[i]);
      scanf("%d", &tab[i]);

    }
    for (int i=9;i>=0;i--){
    printf("%d \n",tab[i]);
    }
    return 0;
}
