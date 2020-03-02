/*************************************************************************
	> File Name: 140.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月11日 星期六 16时15分27秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    char a = 'A', b = 'A';
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1 ; j++) {
            cout << a;
        }
        a++;
        cout << endl;
    }
    b += n - 2;
    for (int i = n - 1; i > 0; i--)  {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int j = 0; j <= 2 * (i - 1); j++) {
            cout << b;
        }
        b--;
        cout << endl;
    }
    return 0;
}
