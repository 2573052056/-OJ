/*************************************************************************
	> File Name: 144.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时53分30秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    scanf ("%s", &*arr);
    int a = 0;
    for (int i = 0; i <= strlen(arr); i++) {
        if (arr[i] == 'A') {
            a++;
        }
    }
    printf ("%d\n", a);
    return 0;
}
