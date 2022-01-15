#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, wynik, x1, x2, pdelta, x0;
    printf("Podaj liczbe A: ");
    scanf("%f", &a);
    printf("\nPodaj liczbe B: ");
    scanf("%f", &b);
    printf("\nPodaj liczbe C: ");
    scanf("%f", &c);

     if(a==0){
    printf("\nJest to rownanie liniowe.");
    x0=-1*(c/b);
    printf("\nx0 = %.2f", x0);
    return 0;
    }

    delta=b*b-4*a*c;

    if(delta>0){
    printf("\nDelta = %.2f\n", delta);
    pdelta=sqrt(delta);
    printf("Pierwiastek z delty = %.2f \n", pdelta);
    x1=(-1*b+pdelta)/(2*a);
    x2=(-1*b-pdelta)/(2*a);
    printf("x1 = %.2f \n x2 = %.2f", x1, x2);
    }

    if(delta==0){

    x0=(-1*b)/(2*a);
    printf("x0 = %.2f", x0);
    }

    else if(delta<0){
        printf("\nDelta = %.2f\n\n", delta);
        printf("Brak rozwiazan!\n");
    }

    if(a==0){
    printf("Jest to rownanie liniowe.");
    x0=-1*(c/b);
    printf("x0 = %.2f", x0);
    }


    return 0;
}
