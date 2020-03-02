/*************************************************************************
	> File Name: 209.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时57分37秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    double num[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &num[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (num[j] > num[j + 1]) {
                int a = num[j + 1];
                num[j + 1] = num[j];
                num[j] = a;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%g\n", num[i]);
    }
    return 0;
}
