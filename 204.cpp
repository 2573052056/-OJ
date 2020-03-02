/*************************************************************************
	> File Name: 204.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 09时53分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n, arr[31][31];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i][i] << endl;
    }
    return 0;
}
