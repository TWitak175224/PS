#include <stdio.h>
#import<math.h>

void z5a() {
    printf("zadanie 5a\n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int flag = 0;
    for (int i = 2; i < n; i++) {
        for (int j = 2; j <= i; j++) {
            if (!(i % j) && !(n % j)) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            printf("%d, ", i);
        }
        flag = 0;
    }
}

void z5b() {
    printf("zadanie 5b\n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int checker = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i; j++) {
            if (!(i % j)) checker += j;
        }
        if (checker == i) {
            printf("%d, ", i);
        }
        checker = 0;
    }
}

void z5c() {
    printf("zadanie 5c\n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int checker = 0;
    for (int i = 2; i <= n; i++) {
        if (!(n % i)) {
            for (int j = 2; j < i; j++) {
                if (!(i % j)) checker += j;
            }
            if (!checker) {
                printf("%d, ", i);
            }
            checker = 0;
        }
    }
}

void z5d() {
    printf("zadanie 5d\n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int ciag_fib_n1 = 0;
    int ciag_fib_n2 = 1;
    int ciag_fib_n = 0;
    for (; ciag_fib_n1 < n;) {
        ciag_fib_n = ciag_fib_n1 + ciag_fib_n2;
        ciag_fib_n2 = ciag_fib_n1;
        ciag_fib_n1 = ciag_fib_n;
    }
    printf("%d\n", ciag_fib_n2);
}

void z5ei() {
    printf("zadanie 5ei\n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int i = 0, k = (int) sqrt(n), j = 0;
    for (;; i++) {

        for (;; j++) {

            for (;; k--) {
                if ((k * k) < n) {
                    break;
                }
            }
            if (((j * j) + (k * k)) > n) {
                j--;
                break;
            }
        }
        if (((i * i) + (k * k) + (j * j)) > n) {
            i--;
            break;
        }

    }
    if ((i * i) + (j * j) + (k * k) == n)
        printf("%d %d %d", i, j, k);
    else {
        printf("nie moge utworzyc tej liczby :<\n");
    }


}

void z5eii() {
    printf("zadanie 5eii \n");
    int n;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&n);
    int flag = 1;
    for (int i = 0; i < sqrt(n); i++) {

        for (int j = 0; j < sqrt(n); j++) {

            for (int k = 0; k < sqrt(n); k++) {
                if (((i * i) + (k * k) + (j * j)) == n) {
                    printf("%d %d %d\n", i, j, k);
                    flag = 0;
                }
            }
        }
    }
    if (flag) {
        printf("nie moge utworzyc tej liczby :<\n");
    }


}

void z6() {
    printf("zadanie 6\n");
    int a;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&a);

    for (int l = 0; l <sqrt(a); l++) {

        for (int i = 0; i < sqrt(a); i++) {

            for (int j = 0; j < sqrt(a); j++) {

                for (int k = 0; k < sqrt(a); k++) {
                    if (((l*l)+(i * i) + (k * k) + (j * j)) == a) {
                        printf("%d %d %d %d\n", l,i, j, k);
                    }
                }
            }
        }
    }
}

int main(void) {
    z5a();
    printf("\n");
    z5b();
    printf("\n");
    z5c();
    printf("\n");
    z5d();
    printf("\n");
    z5ei();
    printf("\n");
    z5eii();
    printf("\n");
    z6();
    return 0;
}