/*************************************************************************
	> File Name: 201.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 23时02分42秒
 ************************************************************************/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a < b;
}

int main() {
    int n, old[1000], w[1000], d = 1, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &old[i]);
    }
    sort(old, old + n, cmp);
    w[0] = old[0];
    for (int i = 1; i < n; i++) {
        if (old[i] != old[i - 1]) {
            w[d++] = old[i];
        }
    }
    printf("%d\n", d);
    for (int i = 0; i < d; i++) {
        printf("%d", w[i]);
        if (i != d - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
