/*************************************************************************
	> File Name: 118.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 19时48分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

static char name[][10] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", 
                          "horse", "sheep", "monkey", "rooster", "dog", "pig"};

int main() {
    int y;
    cin >> y;
    cout << name[((y - 1900) % 12 + 12) % 12] << endl;
    return 0;
}
