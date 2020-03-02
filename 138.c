/*************************************************************************
	> File Name: 138.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时49分09秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    char m = 'A';
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        printf ("%c", m);
        for (int j = 0; j <= 2 * (n - i - 1); j++) {
            printf ("%c", m);
        }
        printf ("\n");
    }
    return 0;
}
