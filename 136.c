/*************************************************************************
	> File Name: 136.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时48分15秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, m = 0;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 && m == 0) {
            printf ("%d\n", i);
            m = 1;
            continue;
        } else if (i % 7 == 0 && m == 1) {
            printf ("%d\n", i);
        }
    }
    return 0;
}
