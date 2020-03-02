/*************************************************************************
	> File Name: 149.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 15时19分17秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int n = 50;
    char a[n];
    char b[n];
    while(~scanf("%s", a)) {
        strcpy(b,a);
    }
    printf("%ld", strlen(b));
    return 0;
}
