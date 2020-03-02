/*************************************************************************
	> File Name: 446.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 10时23分11秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, num[11][11];
    scanf("%d", &n);
    int i, j, k = 1, m = 1;
    for (i = 0; i < n; i++) num[0][i] = k;
    for (i = n - 1; i >= n / 2; i--) {
        for (j = m; j <= i; j++) num[j][i] = k;
        for (j = i; j >= m; j--) num[i][j - 1] = k;
        for (j = i; j > m; j--) num[j - 1][m - 1] = k;
        k++;
        for (j = m; j < i; j++) num[m][j] = k;
        m += 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", num[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
