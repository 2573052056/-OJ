/*************************************************************************
	> File Name: 168.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 18时18分55秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main () {
    int n;
    cin >> n;
    string a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        transform(a[i].begin(), a[i].end(), a[i].begin(),::tolower);
        a[i][0] -= 32;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]){
                string temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
