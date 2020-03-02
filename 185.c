/*************************************************************************
	> File Name: 185.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月21日 星期四 22时50分07秒
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if(n == 1 || n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
