/*************************************************************************
	> File Name: 139.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时49分55秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char c;
    for(int i = 1; i <= n; i++) {
        for(int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for(int j = 0; j < 2 * i; j++){
            c = 'A';
            printf("%c", c);
        }
        printf("\n");
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for(int j = 0; j < (n - i - 1) * 2; j++) {
            c = 'A';
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
