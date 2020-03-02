/*************************************************************************
	> File Name: 193.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月23日 星期六 18时45分04秒
 ************************************************************************/

#include <stdio.h>
typedef long long ll;

int main() {
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
    ll k, s;
    scanf("%lld %lld", &k, &s);
    int flag = 0;
    for(ll i = 0; i < n && !flag; i++) {
        if(a[i] == s - k) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}

