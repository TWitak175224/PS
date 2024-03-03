#include <stdio.h>
#include <math.h>

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

void z42b(void) {
    printf("Z42b)\n");
    unsigned int a, b, ilePodzielnychPrzez3iNiepodzielnychPrzez5 = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if ((!(b % 3)) && (b % 5)) { ilePodzielnychPrzez3iNiepodzielnychPrzez5++; }
    }
    printf("wsrod podanych liczb %d jest podzielnych przez 3 i niepodzielnych przez 5",
           ilePodzielnychPrzez3iNiepodzielnychPrzez5);
}

void z42c(void) {
    printf("Z42c)\n");
    unsigned int a, b, ileKwadratowLiczbParzystych = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if ((sqrt(b) == (int) sqrt(b)) && ((int) (sqrt(b)) % 2 == 0)) {
            ileKwadratowLiczbParzystych++;
        }
    }
    printf("wsrod podanych liczb %d jest kwadratami liczb parzystych",
           ileKwadratowLiczbParzystych);
}

void z42d(void) {
    printf("Z42d)\n");
    unsigned int a, b, previous1 = 0, previous2 = 0, ileSpelniajacychWarunek = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        previous2 = previous1;
        previous1 = b;
        if ((i != 0) && (i != 1)) {
            if (previous1 > ((previous2 + b) / 2))ileSpelniajacychWarunek++;
        }
    }
    printf("wsrod podanych liczb %d spelnia warunek",
           ileSpelniajacychWarunek);
}

void z42e(void) {
    printf("Z42e)\n");
    unsigned int a, b, silnia = 1, ileSpelniajacychWarunek = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        silnia *= (i + 1);
        if ((i > 0) && (i < a)) {
            if ((pow(2, i) < b) && (b < silnia))ileSpelniajacychWarunek++;
        }
    }
    printf("wsrod podanych liczb %d spelnia warunek",
           ileSpelniajacychWarunek);
}

void z42f(void) {
    printf("Z42f)\n");
    unsigned int a, b, ileSpelniajacychWarunek = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if (((i + 1) % 2) && (!(b % 2))) {
            ileSpelniajacychWarunek++;
        }
    }
    printf("wsrod podanych liczb %d spelnia warunek",
           ileSpelniajacychWarunek);
}

void z42g(void) {
    printf("Z42g)\n");
    unsigned int a, ileSpelniajacychWarunek = 0;
    int b;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if ((b % 2) && (b >= 0)) {
            ileSpelniajacychWarunek++;
        }
    }
    printf("wsrod podanych liczb %d spelnia warunek",
           ileSpelniajacychWarunek);
}

void z42h(void) {
    printf("Z42h)\n");
    unsigned int a, ileSpelniajacychWarunek = 0;
    int b;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe naturalna: ");
        scanf("%d", &b);
        if (abs(b) < (pow(i + 1, 2))) {
            ileSpelniajacychWarunek++;
        }
    }
    printf("wsrod podanych liczb %d spelnia warunek",
           ileSpelniajacychWarunek);
}

void z43(void) {
    printf("Z43\n");
    unsigned int a;
    double b, suma = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b > 0) {
            suma += b;
        }
    }
    printf("podwojona suma cyfr dodatnich wynosi: %f",
           2 * suma);
}

void z44(void) {
    printf("Z44\n");
    unsigned int a, ileDodatnich = 0, ileUjemnych = 0, ileZer = 0;
    double b;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b > 0) {
            ileDodatnich++;
        } else if (b < 0)ileUjemnych++;
        else ileZer++;
    }
    printf("ilosc zer we wpisanych liczbach to: %d ilosc liczb ujemnych to: %d ilosc liczb dodatnich to: %d",
           ileZer, ileUjemnych, ileDodatnich);
}

void z45(void) {
    printf("Z45\n");
    unsigned int a;
    double b, min = 1.7976931348623157e308, max =
            1.7976931348623157e308 * -1;//ładniejszy zapis byłby przy użyciu float.h
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b > max) {
            max = b;
        }
        if (b < min) {
            min = b;
        }
    }
    printf("najmniejsza z podanych liczb to: %f , a najwieksza to: %f",
           min, max);
}

void z46(void) {
    printf("Z46\n");
    unsigned int a, ilePar = 0;
    double b, previous = 0;//ładniejszy zapis byłby przy użyciu float.h
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if ((previous > 0) && (b > 0))ilePar++;
        previous = b;
    }
    printf("w podanym ciagu wystgepuje tyle par spelniajacych warunek: %d",
           ilePar);
}

int main(void) {
    z42a();
//    z42b();
//    z42c();
//    z42d();
//    z42e();
//    z42f();
//    z42g();
//    z42h();
//    z43();
//    z44();
//    z45();
//    z46();
    return 0;
}
