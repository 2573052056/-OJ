/************************************************************************
	> File Name: 39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月07日 星期六 12时22分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int begin, n;
    cin >> begin >> n;
    if (begin <= 0) {
        for (int i = 0; i <= 2 * (n - 1); i += 2) {
            cout << i << endl;
        }
    } else if (begin % 2 == 0) {
        for(int i = begin; i < 2 * n + begin; i += 2) {
            cout << i << endl;
        }
    } else {
        for (int i = begin + 1; i < 2 * n + begin + 1; i += 2) {
            cout << i << endl;
        }
    }
    return 0;
}
