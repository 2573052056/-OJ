/*************************************************************************
	> File Name: 310.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月28日 星期六 14时05分39秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1;j <= prime[0]; j++) {
            if (prime[j] * i > n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int cnt[max_n + 5] = {0};

int main() {
    int n;
    cin >> n;
    init(n);
    for (int i = 2; i <= n; i++) {
        int temp = i;
        for (int j = 1; j <= prime[0] && temp >= prime[j]; j++) {
            while (temp % prime[j] == 0) temp /= prime[j], cnt[prime[j]]++;
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        if (!cnt[prime[i]]) continue;
        cout << prime[i] << " " << cnt[prime[i]] << endl;
    }
    return 0;
}
