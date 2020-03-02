/*************************************************************************
	> File Name: 200.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 22时47分38秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n, arr1[1000], arr2[1000];
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        arr1[i] = arr1[i - 1] + arr1[i - 2];
        arr1[2] = 7;
        arr1[1] = 4;
        arr2[i] = arr2[i - 1] + arr2[i - 2];
        arr2[2] = 11;
        arr2[1] = 7;
        sum += (double)(arr1[i])/(double)(arr2[i]);
    }
    printf("%d/%d\n%.2f\n", arr1[n], arr2[n], sum);
    return 0;
}
