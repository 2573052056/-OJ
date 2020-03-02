/*************************************************************************
	> File Name: 133.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时52分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            j - i && cout << "\t";
            cout << i << "*" << j << "=" << i * j;
        }
        cout << endl;
    }
    return 0;
}

