/*************************************************************************
	> File Name: 213.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时58分35秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n, sum = 0;
    int a[1000], b[1000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] < a[j + 1]) {
                int b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 100) {
            b[0]++;
        } else if (a[i] >= 90) {
            b[1]++;
        } else if (a[i] >= 80) {
            b[2]++;
        } else if (a[i] >= 70) {
            b[3]++;
        } else if (a[i] >= 60) {
            b[4]++;
        } else if (a[i] < 60){
            b[5]++;
        }
        printf("%d\n", a[i]);
    }
    printf("%d %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4], b[5]);
    return 0;
}
