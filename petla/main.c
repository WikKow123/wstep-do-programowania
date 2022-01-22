#include <stdio.h>
#include <stdlib.h>


void parzyste(int tablica[10]){

    double licznik = 0, srednia = 0, suma = 0;
    for (int i=0;i<10;i++){
        if (tablica[i] % 2 == 0){
            suma += tablica[i];
            licznik++;
        }
    }
    srednia = suma / licznik;
    printf("Suma liczb parzystych = %.2f \n", suma);
    printf("Srednia liczb parzystych = %.2f \n", srednia);
}

void ujemne(int tablica[10]){
    double licznik = 0, srednia = 0, suma = 0;
for (int i=0;i<10;i++){
    if(tablica[i] < 0){
        suma += tablica[i];
        licznik++;
    }
}
    srednia = suma / licznik;
    printf("Suma liczb ujemnych = %.2f \n", suma);
    printf("Srednia liczb ujemnych = %.2f \n", srednia);
}

int main()
{
    int tab[10];
    double suma = 0, srednia=0;

    for (int i=0;i<10;i++){
    printf("podaj liczbe: \n");
    scanf("%d", &tab[i]);
        }

    for (int i=0;i<10;i++){
        suma = suma + tab[i];
    }

    srednia = suma / 10;
    printf("Suma wszystkich liczb = %.2f \n", suma);
    printf("Srednia wszystkich liczb = %.2f \n", srednia);

    parzyste(tab);
    ujemne(tab);

    return 0;
}
