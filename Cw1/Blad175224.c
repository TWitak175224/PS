//zauważyłem że błąd występuje co piątą linię tekstu,
//tzn pjeśli wypiszę jako "a" 3 to linia wyniku się złamie,
//jeśli jako "a" wpiszę 4 to przy wpisywaniu 4 raz b linia się łamie,
//jeśli jako "a" wpiszę 8 to linia wyniku się łamie
//jeśli jako "a" wpisze 13 to linia wyniku się złamie,
//z wmpisywaniem jako kolejne "a" 3+5*n gdzie n naturalne łamią się wszystkie linie których numer jest podzielny przez 5 bez reszty,


#include <stdio.h>
void z42a(void) {
    printf("Z42a)\n");
    unsigned int a, b, ileNieparzystych = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if (b % 2)ileNieparzystych++;
    }
    printf("wsrod podanych liczb %d jest nieparzyste", ileNieparzystych);
}



int main(void) {
    z42a();
    return 0;
}
