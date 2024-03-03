#include <stdio.h>

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

void z110(void){
    printf("   +\n");
    printf("  + +\n");
    printf(" +   +\n");
    printf("+-----+\n");
    printf("| .-. |\n");
    printf("| | | |\n");
    printf("+-+-+-+\n");
}
void z111(void){
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
void z112(void){
    printf("Iga\nBartek\nHerkules\n");
}
void z113(void){
    printf("* * * * * = = = = = = = = \n"
           "* * * * * = = = = = = = = \n"
           "* * * * * = = = = = = = = \n"
           "* * * * * = = = = = = = = \n"
           "* * * * * = = = = = = = = \n"
           "= = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = \n"
           "= = = = = = = = = = = = = \n");
}
int main(void) {
    z113();

    return 0;
}
