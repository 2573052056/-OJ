/*************************************************************************
	> File Name: 137.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时48分42秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    char m = '@';
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            m += 1;
            printf ("%c", m);
        }
        printf ("\n");
    }
    return 0;
}
