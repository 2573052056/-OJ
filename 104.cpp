/*************************************************************************
	> File Name: 104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 18时39分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if((a % 10 == 9) || (a % 100 / 10 == 9) || (a / 100 == 9)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
