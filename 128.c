/*************************************************************************
	> File Name: 128.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时45分52秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, i = 0;
    int a[1001];
    double ans;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        ans += a[i];
    }
    printf("%.2lf\n", ans / n);
    return 0;
}
