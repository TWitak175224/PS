#include <stdio.h>

int sgn(double x) {
    if (x < 0) {
        return -1;
    } else if (x > 0) {
        return 1;
    } else
        return 0;
}

double namniejsza(double x, double y, double z) {
    if ((x < y) && (x < z)) {
        return x;
    }
    if ((y < x) && (y < z)) {
        return y;
    }
    return z;
}
double srednia(double x, double y, double z){
    return((x+y+z)/3);
}
double potega(double x, int z){
    double potega=1;
    if(z<0){
        z*=-1;
        for(int i;i<z;i++){
            potega+=x;
        }
        return (1/potega);
    }
    else {
        for(int i;i<z;i++){
            potega+=x;
        }
        return potega;
    }
}
int pierwsza_cyfra(int n){
    int flagger = 1;
    for(;;){
        flagger = n/10;
        if(!flagger){
            return n;
        }
        n/=10;
    }
}


int main(void) {
    printf("%f",sgn(-2));
    printf("%f", namniejsza(3,-4.3,-19.3));
    printf("%f", potega(2,2));
    printf("%f",potega(2,-2));

    return 0;
}
//
// Created by local on 16.03.2024.
//
