/*************************************************************************
	> File Name: 148.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月15日 星期五 18时53分47秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char a[50] = {0};
    scanf ("%s", a);
    int temp;
    for (int i = 0; i < strlen(a) / 2; i++) {      
        temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }
    printf ("%s\n", a);
    return 0;
}
