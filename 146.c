/*************************************************************************
	> File Name: 146.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月15日 星期五 18时42分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char a[50] = {0};
    scanf ("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] < 'Z') {
            a[i] += 1;
        } else if (a[i] >= 'a' && a[i] < 'z') {
            a[i] += 1;
        } else if (a[i] == 'Z' || a[i] == 'z') {
            a[i] -= 25;
        }
    }
    printf ("%s\n", a);
    return 0;
}
