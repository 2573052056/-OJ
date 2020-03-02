/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时51分17秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#define max_n 1000

#define swap(a, b) {\
    __typeof(a) __temp__ = a;\
    a = b; b = __temp__;\
}

void f(int *a, int length, int *b) {
    for (int i = 1; i < length; i++) {
        for (int j = 1; j <= length - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
        }
    }
}

int main() {
    int n, m;
    int a[max_n + 5] = {0}, b[max_n + 5] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = i;
    }
    f(a, n, b);
    for (int i = 1; i <= n; i++) {
        if (i - 1) printf(" ");
        printf("%d", b[i]);
    }
    return 0;
}
