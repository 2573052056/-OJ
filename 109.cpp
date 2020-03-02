/*************************************************************************
	> File Name: 109.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 19时09分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n, flag = 1;
    cin >> n;
    while(n && flag) {
        flag = (n % 10) & 1;
        n /= 10;
    }
    cout << (flag ? "NO" : "YES") << endl;
    return 0;
}

