/*************************************************************************
	> File Name: 127.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时45分44秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    int n, m, t;
    double sum = 0;
    scanf("%d %d",&n, &m);
    sum = n;
    for (int i = 1; i <= m; i++) {
        sum *= 1+0.06;
    } 
    t = (int)sum;
    printf("%d\n", t);
    return 0;
}
