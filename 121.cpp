/*************************************************************************
	> File Name: 121.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时32分37秒
 ************************************************************************/

#include <stdio.h>
int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    if ((a == 'O' && b == 'Y') || 
        (a == 'Y' && b == 'H') || 
        (a == 'H' && b == 'O')) {
        printf("MING\n");
    } else if ((a == 'Y' && b == 'O') || 
               (a == 'H' && b == 'Y') || 
               (a == 'O' && b == 'H')) {
        printf("LI\n");
    } else {
        printf("TIE\n");
    }
    return 0;
}
