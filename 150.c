/*************************************************************************
	> File Name: 150.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月15日 星期五 19时12分04秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    int i, j;
    int change[201][201];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            change[j][n - i - 1] = matrix[i][j];
        }
    }
    for(i = 0; i < m;i++) {
        for(j = 0; j < n; j++) {
          printf("%d",change[i][j]);
            j < n - 1 && printf(" ");
    }
        printf("\n");
    }
    return 0;
}
