/*************************************************************************
	> File Name: 190-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 20时03分16秒
 ************************************************************************/
#include <iostream>
using namespace std;
#define max_n 8000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {1, 1, 0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

void solve(int n) {
    init();
    int ans = 0;
    for (int i = 2; i * 2 <= n; i++) {
        if ((!is_prime[i]) && (!is_prime[n - i])) ans += 1;
    }
    cout << ans << endl;
}

int main() {
    int n;
    while(cin >> n) solve(n);
    return 0;
}
