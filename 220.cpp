/*************************************************************************
	> File Name: 220.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时56分58秒
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#define swap(a, b) { \
    __typeof(a) __temp = b; \
    b = a, a = __temp; \
}
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
typedef struct message {
    char name[100];
    int b[100];
}mes;


int main() {
    int n, h, sum[1000] = {0};
    char z[100][100];
    scanf("%d", &n);
    mes a[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %d", a[i].name, &a[i].b[0], &a[i].b[1], &a[i].b[2], &a[i].b[3]);
        sum[i] += (a[i].b[0] + a[i].b[1] + a[i].b[2] + a[i].b[3]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (sum[j] < sum[j + 1]) {
               swap(a[j], a[j + 1]);
                swap(sum[j], sum[j + 1]);
            } else if (sum[j] == sum[j + 1]) {
                if (strcmp(a[j].name, a[j + 1].name) > 0) {
                    swap(a[j], a[j + 1]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        strcpy(z[i], a[i].name);
    }
    for (h = 0; h < 4; h++) {
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                if (a[j].b[h] < a[j + 1].b[h]) {
                    swap(a[j], a[j + 1]);
                } else if (a[j].b[h] == a[j + 1].b[h]) {
                    if (strcmp(a[j].name, a[j + 1].name) > 0) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        printf("%s %s %s %s\n", a[0].name, a[1].name, a[2].name, a[3].name);
    }
    printf("%s %s %s %s\n", z[0], z[1], z[2], z[3]);

    return 0;
}
