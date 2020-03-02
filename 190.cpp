/*************************************************************************
	> File Name: 190.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 19时41分28秒
 ************************************************************************/
#include<stdio.h>
#define MAX_N 8000000
typedef long long ll;

ll prime[MAX_N + 5];

void init() {
    for (ll i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (ll j = 2; j * i <= MAX_N; j++) {
            prime[i * j] = 1;
        }
    }
    return;
}

int main() {
    init();
    ll n, sum = 0;
    scanf("%lld", &n);
    for (ll i = 2; i * 2 <= n; i++) {
        if ((!prime[i]) && (!prime[n - i])) sum++;
    }
    printf("%lld\n", sum);
    return 0;
}
