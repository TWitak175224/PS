#include <stdio.h>
#include <math.h>

void z31a(void) {
    printf("Z31a)\n");
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        wynik += b;
    }
    printf("wynik dodawania tych liczb to:%f", wynik);
}

void z31b(void) {
    printf("Z31b)\n");
    unsigned int a;
    double b, wynik = 1;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        wynik *= b;
    }
    printf("wynik mnozenia tych liczb to:%f", wynik);
}

void z31c(void) {
    printf("Z31c)\n");
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik += b;
    }
    printf("wynik dodawania wartosci bezwzglednych tych liczb to:%f", wynik);
}

void z31d(void) {
    printf("Z31d)\n");
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik += sqrt(b);
    }
    printf("wynik dodawania pierwiastkow wartosci bezwzglednych tych liczb to:%f", wynik);
}

void z31e(void) {
    printf("Z31e)\n");
    unsigned int a;
    double b, wynik = 1;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik *= b;
    }
    printf("wynik mnozenia wartosci bezwzglednych tych liczb to:%f", wynik);
}

void z31f(void) {
    printf("Z31f)\n");
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        b *= b;
        wynik += b;
    }
    printf("wynik dodawania kwadratow tych liczb to:%f", wynik);
}

void z31g(void) {
    printf("Z31g)\n");
    unsigned int a;
    double b, wynik = 0, iloczyn = 1;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        wynik += b;
        iloczyn *= b;
    }
    printf("wynik dodawania tych liczb to:%f , a wynik mnozenia to:%f", wynik, iloczyn);
}

void z31h(void) {
    printf("Z31h)\n");
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        wynik = wynik + (b * pow(-1, i + 1));
    }
    printf("wynik dodawania tych liczb ze zmienionymi znakami tych liczb to:%f", wynik);
}

void z31i(void) {
    printf("Z31i)\n");
    unsigned int a, factorial = 1;
    double b, wynik = 0;
    printf("podaj liczbe naturalna: ");
    scanf("%d", &a);
    for (unsigned int i = 0; i < a; i++) {
        printf("podaj liczbe rzeczywista: ");
        scanf("%lf", &b);
        printf("%d", factorial);
        wynik = wynik + ((b * pow(-1, i)) / factorial);
    }
    printf("wynik dodawania tych liczb ze zmienionymi znakami tych liczb to:%f", wynik);
}

int main(void) {
    z31a();
    z31b();
    z31c();
    z31d();
    z31e();
    z31f();
    z31g();
    z31h();
    z31i();
    return 0;
}