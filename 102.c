/*************************************************************************
	> File Name: 102.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时39分31秒
 ************************************************************************/

#include<stdio.h>
int main() {
    double a, b, c, t;
    double x;
    scanf ("%lf %lf %lf %lf", &a, &b, &c, &t);
    x = (a * b * c - (a + b) * c * t)/((a + b) * c - a * b);
    printf ("%.2lf\n", x + t);
    return 0;
}
