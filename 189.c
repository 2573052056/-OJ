/*************************************************************************
	> File Name: 189.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月22日 星期五 17时06分06秒
 ************************************************************************/

#include <stdio.h>
int num(int, int *, int);
int main() {
    int n, k ,m;
    int numbers[1000001];
  	 int i, j;
    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF) {
        // 读入给定的数字
        for (i = 1; i <= n; i++) {
            scanf("%d", &numbers[i]);
        }
        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", &m);
            // 请在下面完成查找读入数字的功能
            printf("%d", num(m, numbers, n));
            if (j < k - 1) {
                printf(" ");
            }
        }
    }
    return 0;
}
int num(int m, int *nums, int n) {
    int a = 1, b = n, mid;
    while (a <= b) {
        mid = (a + b) / 2;
        if (nums[mid] == m) {
            return mid;
        } else if (nums[mid] < m) {
            a = mid + 1;
        } else {
            b = mid - 1;
        }
    }
    return 0;
}
