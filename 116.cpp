/*************************************************************************
	> File Name: 116.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 19时35分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);//交换
    if (b > c) swap(b, c);
    int f = a * a + b * b - c * c;
    if (a + b <= c) {
        cout << "illegal triangle" << endl;
    } else if (f == 0) {
        cout << "right triangle" << endl;
    } else if (f > 0) {
        cout << "acute triangle" << endl;
    } else {
        cout << "obtuse triangle" << endl;
    }
    return 0;
}
