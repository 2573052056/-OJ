/*************************************************************************
	> File Name: 155.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 18时11分23秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum = 0;
    int a[50];
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        temp = i * (i - 1) + 3;
        a[i] = temp;
        sum += a[i];
        printf ("%d\n", a[i]);
    }
    printf ("%d\n", sum);
    return 0;
}
