/*************************************************************************
	> File Name: 449.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时49分59秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n, s[1000][1000], m = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int c = 0;
        s[i][c] = 1;
        s[1][1] = 1;
    }
    for (int i = 2; i < n; i++) {
        s[i][i] = 1;
    }
    for (int i = 2; i < n; i++) {
        int y = i;
        for (int j = 1; j < i; j++) {
            s[y][j] = s[y - 1][j] + s[y - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", s[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
        m++;
    }
    return 0;
}
