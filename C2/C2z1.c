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
int ostatnia_cyfra(int n){
    return (n%10);
}
int ile_cyfr(int n){
    int i = 1;
    for(;;i++){
        if(!(n/10))
            return i;
        n/=10;
    }
}
double procent_skladany(double pieniadze,double procent,int lata){
    for(int i = 0;i<lata;i++){
        pieniadze*=(1+(procent/100));
    }
    return pieniadze;
}


int main(void) {
    printf("%d\n",sgn((-2.0)));
    printf("%f\n", namniejsza(3,-4.3,-19.3));
    printf("%f\n", potega(2,2));
    printf("%f\n",potega(2,-2));
    printf("%d\n", pierwsza_cyfra(123));
    printf("%d\n", ostatnia_cyfra(234));
    printf("%d\n", ile_cyfr(0));
    printf("%f\n", procent_skladany(100,10,2));

    return 0;
}
//
// Created by local on 16.03.2024.
//
