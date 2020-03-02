/*************************************************************************
	> File Name: 132.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时47分18秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000

int arr[MAX_N + 5] = {0}; 

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);
    long long m = arr[0];
    for (int i = 1; i < n; i++) {
        m *= arr[i];
    }
    printf("%lld\n", m);
    return 0;
}
