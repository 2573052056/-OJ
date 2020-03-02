/*************************************************************************
	> File Name: 169.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 19时24分32秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    getchar();
    char x;
    int a[27] = {0};
    string str;
    for(int i = 0; i < n; i++) {
        cin >> x;
        cin >> m;
        a[x - 65] = m;
    }
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            sum += a[str[i] - 65];
        }
    }
    cout << sum << endl;
    return 0;
}
