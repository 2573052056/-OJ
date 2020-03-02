/*************************************************************************
	> File Name: 310-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月28日 星期六 14时59分40秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
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
    long long n;
    cin >> n;
    init(n);
    for (int j = 1; j <= prime[0]; j++) {
        long long tmp = prime[j], cnt = 0;
        while (tmp <= n) {
            cnt += n / tmp;
            tmp *= prime[j];
        }
        cout << prime[j] << " " << cnt << endl;
    }
    return 0;
}
