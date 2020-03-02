/*************************************************************************
	> File Name: 181.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 10时31分37秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define max_n 100000

int main() {
    char n[max_n + 5];
    scanf("%s", n);
    for(int i = 0; i < strlen(n); i++) {
        if(n[i] >= 'a' &n[i] <= 'z') {
            printf("%c", n[i] - 32);
        }else {
            printf("%c", n[i] + 32);
        }
    }
    printf("\n");
    return 0;
}
