/*************************************************************************
	> File Name: 206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 10时12分31秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n, m;
    double arr[31][31], sum[31];
    double ans = 0, sum1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= m; i++) {
        sum1 = 0.0;
        for (int j = 1; j <= n; j++) {
            sum1 += arr[j][i];
        }
        sum[i] = sum1;
    }
    for (int i = 1; i <= m; i++) {
        cout << sum[i] << endl;
    }
    return 0;
}
