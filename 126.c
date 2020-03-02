/*************************************************************************
	> File Name: 126.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时45分13秒
 ************************************************************************/

#include<stdio.h>
int main() {
    double r1, r2, s;
    double PI = 3.14;
    scanf("%lf %lf", &r1, &r2);
    s = r1 * r1 * PI - r2 * r2 * PI;
    printf("%.2lf", s);
    return 0;
}
