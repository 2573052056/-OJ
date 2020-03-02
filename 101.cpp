/*************************************************************************
	> File Name: 101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月03日 星期二 18时39分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
