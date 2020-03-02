/*************************************************************************
	> File Name: 147.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时55分34秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main() {
    int n = 10001;
    char a[n];
    scanf ("%s", a);
    if ((a[strlen(a) - 1] - 48) % 2 == 0) {
        printf ("YES");
    } else {
        printf ("NO");
    }
    return 0;
}
