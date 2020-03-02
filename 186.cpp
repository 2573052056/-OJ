/*************************************************************************
	> File Name: 186.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月22日 星期五 00时11分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int a[100001] = {0};
int b[100001] = {0};
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = n; i >= 1; --i) {
        if(i + a[i] > n)
            b[i] = 1;   
    }
    int max_v = 1;
    for(int i = n; i >= 1; --i) {
        int m = i - 30 > 0 ? i - 30 : 0;
        for(int j = i - 1; j >= m; --j) {
            if(j + a[j] == i)
            {
                b[j] = b[i] + 1;
                max_v = b[1];
            }
        }
    }
    cout << max_v << endl;
    return 0;
}

