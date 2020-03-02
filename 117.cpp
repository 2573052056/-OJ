/*************************************************************************
	> File Name: 117.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 19时43分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, b, sum = 0;
    cin >> n;
    b = n;
    while (n) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    cout << (sum == b ? "YES" : "NO") << endl;
    return 0;
}
