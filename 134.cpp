/*************************************************************************
	> File Name: 134.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时59分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = ((a - 1) / 11 + 1) * 11, j = 0; i <= b; i += 11, j++) {
        j && cout << " ";
        cout << i;
    }
    cout << endl;
    return 0;
}
