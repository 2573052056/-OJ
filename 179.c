/*************************************************************************
	> File Name: 179.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月21日 星期四 19时21分42秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a, b, m;
    a = -20;
    b = 20;
    while(1) {
        m = (a + b)/2;
        if (fabs(func(p, q, m)) < EPSILON) {
            return m;
        }else if (func(p, q, m)*func(p, q, a) < 0) {
            b = m;  
        }else if (func(p, q, m)*func(p, q, b) < 0) {
            a = m;
        }
    }
   return a;
}

double f(int p, int q, double x) {
    return p * x + q;
}
