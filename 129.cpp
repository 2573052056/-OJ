/*************************************************************************
	> File Name: 129.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时46分51秒
 ************************************************************************/

#include<iostream>
#include<cinttypes>
using namespace std;
int main() {
    int n, a, ans= INT32_MAX;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        ans = min(ans, a); 
    }
    cout << ans << endl;
    return 0;
}
