#include <stdio.h>
#import<math.h>

void z5a(int n) {
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
        flag =0;
    }
}

void z5b(int n) {
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

void z5c(int n) {
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

void z5d(int n) {
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

void z5eii(long a){
    int i=0,k=0,l=0;
    double sprawdzacz=sqrt(a);
    for(;i<sqrt(a);i++){
        printf("i");
    }
}

int main(void) {
    z5a(9);
    printf("\n");
    z5b(1000);
    printf("\n");
    z5c(6);
    printf("\n");
    z5d(55);
    printf("\n");
    z5eii(10000000000);
    return 0;
}