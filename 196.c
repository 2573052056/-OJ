/*************************************************************************
	> File Name: 196.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月23日 星期六 20时07分11秒
 ************************************************************************/

#include <stdio.h>

int pa(int n) {
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    return pa(n - 2) + pa(n - 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", pa(n));
    return 0;
}
