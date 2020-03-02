/*************************************************************************
	> File Name: 207.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时55分59秒
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
#define swap(a, b) { \
    __typeof(a) __temp = b; \
    b = a, a = __temp; \
}

typedef struct pj{
    char name[100];
    int data[1000];
    int k;
}pj;

bool a(int a, int b) {
    return a > b;
}

bool b(int a, int b) {
    return a < b;
}

int main() {
    int n, sum[1000] = {0}, h[1000], m = 0;
    scanf("%d", &n);
    pj s[100];
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &s[i].data[j]);
            sum[i] += s[i].data[j];
            h[m] = s[i].data[j];
            m++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", sum[i]);
    }
    sort(h, h + m, b);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (sum[j] < sum[j + 1]) {
                swap(s[j], s[j + 1]);
                swap(sum[j], sum[j + 1]);
            }
        }
    }
    printf("%s\n", s[0].name);
    printf("%d %d", h[m - 1], h[0]);
    return 0;
}
