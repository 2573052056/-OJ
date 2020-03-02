/*************************************************************************
	> File Name: 197.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月23日 星期六 20时11分13秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n = 10;
    int a[10];
    int m, t;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        m = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[m] < a[j]) {
                m = j;
            }
        }
        t = a[m];
        a[m] = a[i];
        a[i] = t;
    }
    printf("%d", a[0]);
    for (int i = 1; i < 10; ++i) {
        printf(" %d", a[i]);
    }
    return 0;
}
