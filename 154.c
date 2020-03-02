/*************************************************************************
	> File Name: 154.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 16时14分05秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf ("%d", &n);
    for (int i = n; i > 0; i--) {
        printf ("%d", i);
        for (int j = i - 1; j >0; j--) {
            printf (" %d", j);
        }
        printf ("\n");
    }
    return 0;
}

