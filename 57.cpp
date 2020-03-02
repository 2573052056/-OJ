/*************************************************************************
	> File Name: 57.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 22时23分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000000

int num[MAX_N + 5] = {0};
int c[MAX_N];

void xulie() {
    int x = 1, i = 1, j = 0;
    while (i <= MAX_N) {
        int y = x;
        j = 1;
        while (y != 0) {
            c[j] = y % 10;
            y /= 10;
            j++;
        }
        for (int k = 1; k <= j - 1; k++) {
            num[i] = c[j - k];
            i++;
            if (i > MAX_N) break;
        }
        x++;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    xulie();
    cout << num[x] * num[y] * num[z] << endl;
    return 0;
}
