/*************************************************************************
	> File Name: 122.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 20时22分09秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

char str[][10]= {"am", "pm", "midnoon"};
int main() {
    int t, h, m, s, flag = 0;
    cin >> t;
    h = t / 3600;
    m = t % 3600 / 60;
    s = t % 60;
    if (h > 12) h -= 12, flag = 1;
    printf ("%02d:%02d:%02d ", h, m, s);
    flag += 2 * (h == 12);
    printf("%s\n", str[flag]);
    return 0;
}
