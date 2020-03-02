/*************************************************************************
	> File Name: 123.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时39分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b-a > d-c) swap(a, c), swap(b, d);
    if (a >= c && b <= d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
