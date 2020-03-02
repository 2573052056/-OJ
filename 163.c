/*************************************************************************
	> File Name: 163.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 19时03分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double a, b, C, c;
    double pi = 3.141592653589793;
    scanf ("%lf %lf %lf", &a, &b, &C);
    c = sqrt(a * a + b * b - 2 * a * b * cos(C * pi / 180));
    printf ("%.6lf\n", c);
    return 0;
}
