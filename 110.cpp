/*************************************************************************
	> File Name: 110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 19时04分31秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    double x, y;
    cin >> x;
    y = (x > 15 ? 15 : x ) * 6 + (x > 15) * (x - 15) * 9;
    printf("%.2lf\n", y);
    return 0;
}
