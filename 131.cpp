/*************************************************************************
	> File Name: 131.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时50分39秒
 ************************************************************************/

#include<iostream>
#include<cinttypes>
using namespace std;
int main() {
    int32_t n, a, ans_min = INT32_MAX, ans_max = INT32_MIN;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        ans_max = max(ans_max, a);
        ans_min = min(ans_min, a);
    }
    cout << ans_max - ans_min << endl;
    return 0;
}

