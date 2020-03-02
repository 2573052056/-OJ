/*************************************************************************
	> File Name: 172.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 20时01分10秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char a[10][21];
	int i, j, m;
    for (i = 0; i < 10; ++i) {
        scanf ("%s", a[i]);
    }
    char b[21];
    for (i = 0; i < 10; ++i) {
        m = i;
        for (j = i + 1; j < 10; ++j) {
            if (strcmp (a[m], a[j]) > 0) {
                m = j;
            }
        }
        strcpy(b, a[i]);
        strcpy(a[i], a[m]);
        strcpy(a[m], b);
    }
    for (i = 0; i < 10; ++i) {
        printf ("%s\n", a[i]);
    }
    return 0;
}
