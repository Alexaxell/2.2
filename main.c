#include <stdio.h>

int main(void) {
    float base, altezza, area;
    printf("inserisci la misura della base:");
    scanf("%f", &base);
    printf("inserisci la misura dell'altezza:");
    scanf("%f", &altezza);
    area = base * altezza / 2;
    printf("l'area del triangolo è: %f", area);
    return 0;
}
