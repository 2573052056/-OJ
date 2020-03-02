/*************************************************************************
	> File Name: 210.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时59分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        getchar();
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            char a[100];
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(a, str[j + 1]);
                strcpy(str[j + 1], str[j]);
                strcpy(str[j], a);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s", str[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
