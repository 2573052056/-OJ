/*************************************************************************
	> File Name: 145.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时55分06秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_n 100

char name[max_n + 5];
char ans[max_n + 5];
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        getchar();
        int max_len = 0;
        memset(name, 0, sizeof(name));
        memset(ans, 0, sizeof(name));
        for (int i = 0; i < n; i++) {
            scanf("%[^\n]s", name);
            getchar();
            int len = strlen(name);
            if (len > max_len) {
                strncpy(ans, name, sizeof(ans)); 
                max_len = len;
            }
        }
        printf("%s\n", ans);
    }
    return 0;
}
