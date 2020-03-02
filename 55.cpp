/*************************************************************************
	> File Name: 55.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月29日 星期日 20时37分08秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int h, q, m, k, j;
    int y, d;
    int y1, m1, d1;
    cin >> y >> m >> d;
    cin >> y1 >> m1 >> d1;
    if (m > 6 || (m == 6 && d > 6)){
        y = y + 1;
    }
    if (m1 < 6 || (m == 6 && d1 < 6)){
        y1 = y1 - 1;
    }
    int ans = 0;
    for (int i = y; i < y1; i++){
        k = i % 100;
        j = i / 100;
        h =(6 + 26 * (6 + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
        h = h - 1;
        if(h == -1){
            h = 6;
        }
        if(h == 0){
            h = 7;
        }
        if (h == 6){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
