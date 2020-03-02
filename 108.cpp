/*************************************************************************
	> File Name: 108.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月05日 星期四 18时49分01秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    char str[10];
    double a, b;
    scanf("%s %lf %lf", str, &a, &b);
    switch(str[0]) {
        case 'r' : printf("%.2lf\n", a * b); break;
        case 't' : printf("%.2lf\n", a * b / 2); break;
    }

    return 0;
}
