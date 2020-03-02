/*************************************************************************
	> File Name: 216.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 23时00分20秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[100][100];
    //char new[100][100];
    char cc[100][100];
    scanf("%d", &n);
    char zf[100];
    for (int i = 0; i < n; i++) {
        scanf("%[^.]s", zf);
        getchar();
        scanf("%s", str[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                char h[100];
                strcpy(h, str[j + 1]);
                strcpy(str[j + 1], str[j]);
                strcpy(str[j], h);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
