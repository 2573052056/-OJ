/*************************************************************************
	> File Name: 177.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 23时03分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = {0}, c[100] = {0}, d[100] = {0};
    scanf("%s", str);
    char a[100];
    strcpy(a, str);
    int e = 0, f = 0, h = 1;
    printf("%s\n", str);
    for (int j = 0; j < (int)strlen(str); j++) {
        for (int i = 0; i < (int)strlen(str); i++) {
            if (i >= (int)strlen(str) - 2) {
            c[e] = str[i];
            e++;
            } else {
            d[f] = str[i];
            f++;
            }
        }
        strcat(c, d);
        memset(d, 0, sizeof(d));
        h++;
        if (h <= (int)strlen(a)) {
            printf("%s\n", c);
        } else {
            break;
        }
        e = 0, f = 0;
        strcpy(str, c);
        memset(c, 0, sizeof(c));
    }
    return 0;
}
