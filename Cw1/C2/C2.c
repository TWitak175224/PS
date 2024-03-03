#include <stdio.h>
#include <math.h>

void z21(void) {
    printf("Z21\n");
    double a;
    scanf("%lf", &a);
    if (a < 0) {
        printf("%f", a * -1);
    } else {
        printf("%f", a);
    }
}

void z22(void) {
    printf("Z22\n");
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    if (b == 0) {
        printf("b jest 0 wiec nie moge podzielic");
        return;
    }
    printf("%f", a / b);
}

void z23(void) {
    printf("Z23\n");
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    if (a == 0) {
        printf("a jest 0 wiec nie ma rozwiazan");
        return;
    }
    printf("x = %f", b / a);
}

void z24(void) {
    printf("Z24\n");
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if ((a < b) && (a < c)) {
        if (b < c) {
            printf("najmniejsza jest: %f najwieksza jest:%f\n", a, c);
        } else
            printf("najmniejsza jest: %f najwieksza jest:%f\n", a, b);
    } else if ((b < a) && (b < c)) {
        if (a < c) {
            printf("najmniejsza jest: %f najwieksza jest:%f\n", b, c);
        } else
            printf("najmniejsza jest: %f najwieksza jest:%f\n", b, a);
    } else if ((c < b) && (c < a)) {
        if (a < b) {
            printf("najmniejsza jest: %f najwieksza jest:%f\n", c, b);
        } else
            printf("najmniejsza jest: %f najwieksza jest:%f\n", c, a);
    } else if ((a == b) && (b == c)) {
        printf("wszystkie sa takie same\n");
    }
}

void z25(void) {
    printf("Z25\n");
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (!(((a + b) > c) || ((b + c) > a) || ((a + c) > b))) {
        scanf("To nie sa boki trojkata! Koncze program!");
        return;
    }
    double obwod = a + b + c;
    double polowaObwodu = obwod / 2;
    double pole = sqrt(polowaObwodu * (polowaObwodu - a) * (polowaObwodu - b) * (polowaObwodu - c));
    printf("Obwod trojkata to: %f , a pole trojkata to: %f", obwod, pole);
}
int main(void) {
    z21();
    z22();
    z23();
    z24();
    z25();
    return 0;
}
