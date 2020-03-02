/*************************************************************************
	> File Name: 188.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月19日 星期四 19时14分33秒
 ************************************************************************/
#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
void init() {
    int n, m;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    int n, m;
    init();
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
