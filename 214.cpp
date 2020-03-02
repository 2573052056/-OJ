/*************************************************************************
	> File Name: 214.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 23时03分15秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n, x;
    double sum;
    int num[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (num[j] < num[j + 1]) {
                int a = num[j];
                num[j] = num[j + 1];
                num[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        sum += num[i];
    }
    printf("%.2f\n", sum / x);
    return 0;
}
