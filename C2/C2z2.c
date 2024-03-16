#include <stdio.h>
#import<math.h>

void z5a() {
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
    int a;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&a);
    int i = 0, k = (int) sqrt(a), j = 0;
    for (;; i++) {

        for (;; j++) {

            for (;; k++) {
                if ((k * k) > a) {
                    k--;
                    break;
                }
            }
            if (((j * j) + (k * k)) > a) {
                j--;
                break;
            }
        }
        if (((i * i) + (k * k) + (j * j)) > a) {
            i--;
            break;
        }

    }
    if ((i * i) + (j * j) + (k * k) == a)
        printf("%d %d %d", i, j, k);
    else {
        printf("nie moge utworzyc tej liczby :<\n");
    }


}

void z5eii() {
    int a;
    printf("wprowadz liczbe naturalna: ");
    scanf("%d",&a);
    int flag = 1;
    for (int i = 0; i < sqrt(a); i++) {

        for (int j = 0; j < sqrt(a); j++) {

            for (int k = 0; k < sqrt(a); k++) {
                if (((i * i) + (k * k) + (j * j)) == a) {
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

void z6(int a) {
    int flag = 1;
    for (int l = 0; l <sqrt(a); l++) {

        for (int i = 0; i < sqrt(a); i++) {

            for (int j = 0; j < sqrt(a); j++) {

                for (int k = 0; k < sqrt(a); k++) {
                    if (((l*l)+(i * i) + (k * k) + (j * j)) == a) {
                        printf("%d %d %d %d\n", l,i, j, k);
                        flag = 0;
                    }
                }
            }
        }
    }
}

int main(void) {
//    z5a(9);
//    printf("\n");
//    z5b(1000);
//    printf("\n");
//    z5c(6);
//    printf("\n");
//    z5d(55);
//    printf("\n");
    z6(26);
    return 0;
}