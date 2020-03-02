/*************************************************************************
	> File Name: 107.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时40分27秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf ("%d", &n);
    if (n % 2 != 0) {
        if (n % 7 == 0) {
            printf ("YES");
        }else {
            printf ("NO");
        }
    }else {
        printf ("NO");
    }
    return 0;
}
