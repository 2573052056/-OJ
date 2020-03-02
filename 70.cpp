/*************************************************************************
	> File Name: 70.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月07日 星期六 13时12分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
        cout << i << endl;
        }
    }
    return 0;
}
