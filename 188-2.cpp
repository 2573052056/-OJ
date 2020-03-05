/*************************************************************************
	> File Name: 188-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月05日 星期四 22时09分06秒
 ************************************************************************/
#include <iostream>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
    for (int  i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= prime[0] && prime[i] <= n; i++) {
        if (prime[i] < m) continue;
        cout << prime[i] << endl;
    }
    return 0;
}

