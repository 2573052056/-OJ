/*************************************************************************
	> File Name: 448.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 09时36分51秒
 ************************************************************************/

#include<stdio.h>
#define max_n 100

int arr[max_n + 5] = {0};

int main() {
    int n, num;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for (int i = 1; i <= n; i++) {
        if (arr[i] == num) {
            printf("%d\n", i);
            break;
        } else if (i == n && arr[i] != num) {
            printf("0\n");
        }
    }
    return 0;
}
