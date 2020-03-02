/*************************************************************************
	> File Name: 165.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 20时01分06秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    long long c, a;
    long long sum = 0;
    scanf ("%lld", &c);
    for (long long i = 1; i < c; i++) {
        a = sqrt (c * c - i * i);
        if (a * a + i * i == c * c) {
            sum++;
        }
    }
    printf ("%lld\n", sum / 2);
    return 0;
}
