/*************************************************************************
	> File Name: 215.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时54分02秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
typedef struct p {
    int data[10000];
    char name[10000];
    char c;
}p;

void swap(p *a, p *b) {
    p c = *b;
    *b = *a;
    *a = c;
}

int main() {
    int sum[100000] = {0};
    int n;
    scanf("%d", &n);
    p a[100];
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i].name);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i].data[j]);
            sum[i] += a[i].data[j];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (sum[j] < sum[j + 1]) {
                swap(&a[j], &a[j + 1]);
                int a = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%s\n", a[i].name);
    }
    return 0;
}
