/*************************************************************************
	> File Name: 205.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 10时02分49秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n, m, sum, arr[31][31], ave[31];
    double ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        ave[i] = sum;
    }
    for (int i = 1; i <= n; i++) {
        ans = 1.0 * ave[i] / m;
        printf("%f\n", ans);
    }
    return 0;
}
