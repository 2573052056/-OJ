/*************************************************************************
	> File Name: 56.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 22时13分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 5000000

int fact[MAX_N + 5];
int num[MAX_N + 5];
int m;

void init (int n){
    fact[0] = 1;
    for (int i = 1; i <= n; i++){
        fact[i] = fact [i - 1] * i;
        num[i] = 1;
    }
    return ;

}

int get_ans(int k, int val){
    int step = k / val;
    int i;
    m = 0;
    for (i = 0; i <= step; m += (i <= step)){
        i += num[m];
    }
    k %= val;
    num[m] = 0;//防止重复
    return k;
}

int main() {
    int x, y;
    scanf("%d%d", &x,&y);
    init (x);
    int k = y - 1; //需要跳的种数；
    for (int i = x; i >= 1 ; i--){
        k = get_ans(k, fact[i - 1]);
        printf("%d", m);

    }
    return 0;
}
