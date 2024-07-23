#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>

int main(){

    char c = 'a';
    short s = -243;
    int a = -102452;
    float b = 2043.39;
    double d = 948435251151.248374923707;

    long int li = 261072401410;
    long double ld = 226140174104710.25107410247120;
    long long int lli = 1157107501750105710;

    u_short us = 243;
    u_int ua = 235235151;
    uint64_t int64 = 2842230274023750913;
    
    printf("%c\n", c);
    printf("%hd\n", s);
    printf("%hu\n", s);
    printf("%d\n", a);
    printf("%u\n", a);
    printf("%li\n", li);
    printf("%llu\n", lli);
    printf("%f\n", b);
    printf("%0.20lf\n", d);
    printf("%0.20Lf\n", ld);
    printf("%lu\n", int64);

}
