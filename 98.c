/*************************************************************************
	> File Name: 98.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时37分37秒
 ************************************************************************/

#include<stdio.h>
#define PI 3.14
int main () {
    double r, h, s, v;
    scanf ("%lf %lf", &r, &h);
	s = r * r * PI;
	v = s * h;
    printf ("%.2lf\n", s);
    printf ("%.2lf\n", v);
    return 0;
}
