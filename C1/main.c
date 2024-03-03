#include <stdio.h>
#include <math.h>

//git config --global user.name "TWitak175224"
//git config --global user.email "161207572+TWitak175224@users.noreply.github.com"
void z11(void) {
    printf("Tomasz Witak\n");
    printf("Tomasz\nWitak\n");
    printf("Tomasz");
    printf("Witak");
}

void z12(void) {
    printf("\nsuma dni pierwszych trzech miesiecy to %d", 31 + 29 + 31);
}

void z13(void) {
    int sum = 0;
    for (int i = 0; i <= 10; sum += i++);
    printf("%d", sum);
}

void z14(void) {
    int iloczyn = 1;
    for (int i = 1; i <= 10; iloczyn *= i++);
    printf("%d", iloczyn);
}

void z15(void) {
    double zawartoscKonta = 1000;
    for (int i = 1; i < 4; i++) {
        zawartoscKonta *= 1.06;
        printf("konto po %d roku ma %.2f pieniedzy\n", i, zawartoscKonta);
    }
}

void z16(void) {
    printf("________________\n");
    printf("| Programowanie |\n");
    printf("----------------\n");
}

void z17(void) {
    printf("     |||||   \n");
    printf("    +=====+\n  ");
    printf(" (| o o |)\n");
    printf("     | L |\n");
    printf("    | '_' |\n");
    printf("    +------+\n");

}

void z18(void) {
    printf("*********  ***  **   **      *       ****  *****   *     * * *********      *      *   *\n");
    printf("    *     *   * * * * *     * *     *    *     *   *     * *     *         * *     *  *\n");
    printf("    *     *   * *  *  *    *   *     **      *     *     * *     *        *   *    **\n");
    printf("    *     *   * *     *   *******      **   *      *  *  * *     *       *******   * *\n");
    printf("    *     *   * *     *  *       *  *    * *       * * * * *     *      *       *  *  *\n");
    printf("    *      ***  *     * *         *  ****  *****   **   ** *     *     *         * *   *\n");

}

void z19(void) {
    printf("***,*#%#############\n");
    printf(".....###############\n");
    printf(".....###############\n");
    printf(".....###############\n");
    printf(",....###############\n");
    printf(".....###############\n");
    printf("#%%%%%%%**,,..,,,..,,&.\n");
    printf("#%%%%%%%.....,.......&@\n");
}

void z110(void) {
    printf("   +\n");
    printf("  + +\n");
    printf(" +   +\n");
    printf("+-----+\n");
    printf("| .-. |\n");
    printf("| | | |\n");
    printf("+-+-+-+\n");
}

void z111(void) {
    printf("             _______\n");
    printf("            / Hello \\\n");
    printf("  .-\"\"\"-.  | World /\n");
    printf(" /      o\\ /------/\n");
    printf("|    o   0).-.\n");
    printf("|       .-;(_/     .-.\n");
    printf(" \\     /  /)).---._|  `\\   ,\n");
    printf("  '.  '  /((       `'-./ _/|\n");
    printf("    \\  .'  )        .-.;`  /\n");
    printf("     '.             |  `\\-'\n");
    printf("       '._        -'    /\n");
    printf("          ``\"\"--`------`\n");//art by jgs
}

void z112(void) {
    printf("Iga\nBartek\nHerkules\n");
}

void z113(void) {
    printf("\"Raz Mozarta bawiacego w Pradze obsypały z kominka\n"
           "sadze. Fakt, ze potem, w ciagu pol godziny, wymorusal az\n"
           "cztery hrabiny, jakos uszedl biografow uwadze\"");
}

void z114(void) {
    printf("* * * * * = = = = = = = = = = = = = = \n"
           "* * * * * = = = = = = = = = = = = = = \n"
           "* * * * * = = = = = = = = = = = = = = \n"
           "* * * * * = = = = = = = = = = = = = = \n"
           "* * * * * = = = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = = = = = = = \n");
}

void z21(void) {
    double a;
    scanf("%lf", &a);
    if (a < 0) {
        printf("%f", a * -1);
    } else {
        printf("%f", a);
    }
}

void z22(void) {
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

void z31a(void) {
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &a);
    for (unsigned int i = 0; i > a; i++) {
        printf("\npodaj liczbe rzeczywista");
        scanf("%lf", &b);
        wynik += b;
    }
    printf("wynik dodawania tych liczb to:%f", wynik);
}

void z31b(void) {
    unsigned int a;
    double b, wynik = 1;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &a);
    for (unsigned int i = 0; i > a; i++) {
        printf("\npodaj liczbe rzeczywista");
        scanf("%lf", &b);
        wynik *= b;
    }
    printf("wynik mnozenia tych liczb to:%f", wynik);
}

void z31c(void) {
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &a);
    for (unsigned int i = 0; i > a; i++) {
        printf("\npodaj liczbe rzeczywista");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik += b;
    }
    printf("wynik dodawania wartosci bezwzglednych tych liczb to:%f", wynik);
}

void z31d(void) {
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &a);
    for (unsigned int i = 0; i > a; i++) {
        printf("\npodaj liczbe rzeczywista");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik += sqrt(b);
    }
    printf("wynik dodawania pierwiastkow wartosci bezwzglednych tych liczb to:%f", wynik);
}

void z31e(void) {
    unsigned int a;
    double b, wynik = 0;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &a);
    for (unsigned int i = 0; i > a; i++) {
        printf("\npodaj liczbe rzeczywista");
        scanf("%lf", &b);
        if (b < 0)b *= -1;
        wynik *= b;
    }
    printf("wynik mnozenia wartosci bezwzglednych tych liczb to:%f", wynik);
}

int main(void) {
    z23();

    return 0;
}
