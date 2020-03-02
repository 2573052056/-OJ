/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时42分04秒
 ************************************************************************/

#include<stdio.h>
int main() {
    char x;
    scanf("%s", &x);
    if (x == 'h') {
        printf("He");
    }else if (x == 'l') {
        printf("Li");
    }else if (x == 'c') {
        printf("Cao");
    }else if (x == 'd') {
        printf("Duan");
    }else if (x == 'w') {
        printf("Wang");
    }else {
        printf("Not Here");
    }
    return 0;
}
