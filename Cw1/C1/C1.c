#include <stdio.h>
void z11(void) {
    printf("Z11\n");
    printf("Tomasz Witak\n");
    printf("Tomasz\nWitak\n");
    printf("Tomasz");
    printf("Witak");
}

void z12(void) {
    printf("Z12\n");
    printf("\nsuma dni pierwszych trzech miesiecy to %d", 31 + 29 + 31);
}

void z13(void) {
    printf("Z13\n");
    int sum = 0;
    for (int i = 0; i <= 10; sum += i++);
    printf("%d", sum);
}

void z14(void) {
    printf("Z14\n");
    int iloczyn = 1;
    for (int i = 1; i <= 10; iloczyn *= i++);
    printf("%d", iloczyn);
}

void z15(void) {
    printf("Z15\n");
    double zawartoscKonta = 1000;
    for (int i = 1; i < 4; i++) {
        zawartoscKonta *= 1.06;
        printf("konto po %d roku ma %.2f pieniedzy\n", i, zawartoscKonta);
    }
}

void z16(void) {
    printf("Z16\n");
    printf("________________\n");
    printf("| Programowanie |\n");
    printf("----------------\n");
}

void z17(void) {
    printf("Z17\n");
    printf("     |||||   \n");
    printf("    +=====+\n  ");
    printf(" (| o o |)\n");
    printf("     | L |\n");
    printf("    | '_' |\n");
    printf("    +------+\n");

}

void z18(void) {
    printf("Z18\n");
    printf("*********  ***  **   **      *       ****  *****   *     * * *********      *      *   *\n");
    printf("    *     *   * * * * *     * *     *    *     *   *     * *     *         * *     *  *\n");
    printf("    *     *   * *  *  *    *   *     **      *     *     * *     *        *   *    **\n");
    printf("    *     *   * *     *   *******      **   *      *  *  * *     *       *******   * *\n");
    printf("    *     *   * *     *  *       *  *    * *       * * * * *     *      *       *  *  *\n");
    printf("    *      ***  *     * *         *  ****  *****   **   ** *     *     *         * *   *\n");

}

void z19(void) {
    printf("Z19\n");
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
    printf("Z110\n");
    printf("   +\n");
    printf("  + +\n");
    printf(" +   +\n");
    printf("+-----+\n");
    printf("| .-. |\n");
    printf("| | | |\n");
    printf("+-+-+-+\n");
}

void z111(void) {
    printf("Z111\n");
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
    printf("Z112\n");
    printf("Iga\nBartek\nHerkules\n");
}

void z113(void) {
    printf("Z113\n");
    printf("\"Raz Mozarta bawiacego w Pradze obsypały z kominka\n"
           "sadze. Fakt, ze potem, w ciagu pol godziny, wymorusal az\n"
           "cztery hrabiny, jakos uszedl biografow uwadze\"");
}

void z114(void) {
    printf("Z114\n");
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
int main(void) {
    z11();
    z12();
    z13();
    z14();
    z15();
    z16();
    z17();
    z18();
    z19();
    z110();
    z111();
    z112();
    z113();
    z114();
    return 0;
}
