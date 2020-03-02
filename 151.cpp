/*************************************************************************
	> File Name: 151.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月10日 星期五 18时17分35秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;

int main() {
    char a1, a2, b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    if ((a1 == 'Y' && b1 == 'H') || (a1 == 'O' && b1 == 'Y') || (a1 == 'H' && b1 == 'O')) {
        if ((a1 == 'Y' && b2 == 'H') || (a1 == 'O' && b2 == 'Y') || (a1 == 'H' && b2 == 'O') || a1 == b2) {
            cout << "MING" << endl;
        } else {
            if((a2 == 'Y' && b2 == 'H') || (a2 == 'O' && b2 == 'Y') || (a2 == 'H' && b2 == 'O')) {
                cout << "MING" << endl;
            } else {
                cout << "LIHUA" << endl;
            }
        }
    } else if (a1 == b1) {
        if ((a2 == 'Y' && b2 == 'H') || (a2 == 'O' && b2 == 'Y') || (a2 == 'H' && b2 == 'O')) {
            cout << "MING" << endl;
        } else if ((b2 == 'Y' && a2 == 'H') || (b2 == 'O' && a2 == 'Y') || (b2 == 'H' && a2 == 'O')) {
            cout << "LIHUA" << endl;
        } else {
            cout << "TIE" << endl;
        }
    } else {
        if ((a2 == 'Y' && b1 == 'H') || (a2 == 'O' && b1 == 'Y') || (a2 == 'H' && b1 == 'O')) {
            if ((a2 == 'Y' && b2 == 'H') || (a2 == 'O' && b2 == 'Y') || (a2 == 'H' && b2 == 'O') || a2 == b2) {
                cout << "MING" << endl;
            } else {
                cout << "LIHUA" << endl;
            }
        } else {
            cout << "LIHUA" << endl;
        }
    }
    return 0;
}
