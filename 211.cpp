/*************************************************************************
	> File Name: 211.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时59分58秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[100][100];
    char ls[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        strcpy(ls[i], str[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (int)strlen(str[i]); j++) {
            int len = strlen(str[i]);
            str[i][j] = ls[i][len - j - 1];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char a[100];
                strcpy(a, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], a);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
